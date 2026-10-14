auto duration = duration_cast<microseconds>(end - start);
    
    cout << "Execution time: "
         << duration.count() << " microseconds\n";