#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	std::ifstream read("cownomics.in");

	int cow_num;
	int genome_len;
	read >> cow_num >> genome_len;

	vector<vector<int>> spotted(cow_num, vector<int>(genome_len));
	for (int s = 0; s < cow_num; s++) {
		std::string genome;
		read >> genome;
		for (int g = 0; g < genome_len; g++) {
			// A -> 0, C -> 1, T -> 2, G -> 3
			if (genome[g] == 'A') {
				spotted[s][g] = 0;
			} else if (genome[g] == 'T') {
				spotted[s][g] = 1;
			} else if (genome[g] == 'C') {
				spotted[s][g] = 2;
			} else if (genome[g] == 'G') {
				spotted[s][g] = 3;
			}
		}
	}

	vector<vector<int>> plain(cow_num, vector<int>(genome_len));
	for (int p = 0; p < cow_num; p++) {
		std::string genome;
		read >> genome;
		for (int g = 0; g < genome_len; g++) {
			if (genome[g] == 'A') {
				plain[p][g] = 0;
			} else if (genome[g] == 'T') {
				plain[p][g] = 1;
			} else if (genome[g] == 'C') {
				plain[p][g] = 2;
			} else if (genome[g] == 'G') {
				plain[p][g] = 3;
			}
		}
	}

	int valid_sets = 0;

	// Loop through every possible group of 3.
	for (int a = 0; a < genome_len; a++) {
		for (int b = a + 1; b < genome_len; b++) {
			for (int c = b + 1; c < genome_len; c++) {
				vector<bool> spotted_ids(64);
				for (int sc = 0; sc < cow_num; sc++) {
					/*
					 * By multiplying the first, second, and
					 * third digits by 16, 4, and 1 respectively, we can
					 * get a number unique to that combination.
					 */ 
					int total = (
						spotted[sc][a] * 16
						+ spotted[sc][b] * 4
						+ spotted[sc][c] * 1
					);
					spotted_ids[total] = true;
				}

				bool valid = true;
				for (int pc = 0; pc < cow_num; pc++) {
					int total = (
						plain[pc][a] * 16
						+ plain[pc][b] * 4
						+ plain[pc][c] * 1
					);
					// We can't tell the spotted & plain cows apart.
					if (spotted_ids[total]) {
						valid = false;
						break;
					}
				}

				valid_sets += valid;
			}
		}
	}

	std::ofstream("cownomics.out") << valid_sets << endl;
}
