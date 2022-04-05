const char *filename = argv[2];
FILE* output_file;

output_file = fopen(filename, "wb");
//validate file pointer
if(!output_file) {
   perror("Unable to open file for writing.");
   if (argc > 2 && filename) {
     fprintf(stderr, "\"%s\"\n", filename);
   }
   return EXIT_FAILURE;
}
