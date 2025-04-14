//String, PD
//Calcula distancia entre strings
//O(n*m)

int levdis(string ini,string nova){
    vector<vector<int>> matrix(ini.length()+ 1, vector<int>(nova.length() + 1));

    for (int i = 0; i <= ini.length(); i++) {
        for (int j = 0; j <= nova.length(); j++) {
            if (i == 0) {
                matrix[i][j] = j;
            } else if (j == 0) {
                matrix[i][j] = i;
            } else if (ini[i - 1] == nova[j - 1]) {
                matrix[i][j] = matrix[i - 1][j - 1];
            } else {
                matrix[i][j] = 1 + std::min({matrix[i - 1][j],      // Deletion
                                              matrix[i][j - 1],      // Insertion
                                              matrix[i - 1][j - 1]}); // Substitution
            }
        }
    }

    return matrix[ini.length()][nova.length()];
}
