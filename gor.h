/*
 *  BEGIN_COPYRIGHT
 *
 *  Copyright (C) 2020 WuXi NextCode Inc.
 *  All Rights Reserved.
 *
 *  GORpipe is free software: you can redistribute it and/or modify
 *  it under the terms of the AFFERO GNU General Public License as published by
 *  the Free Software Foundation.
 *
 *  GORpipe is distributed "AS-IS" AND WITHOUT ANY WARRANTY OF ANY KIND,
 *  INCLUDING ANY IMPLIED WARRANTY OF MERCHANTABILITY,
 *  NON-INFRINGEMENT, OR FITNESS FOR A PARTICULAR PURPOSE. See
 *  the AFFERO GNU General Public License for the complete license terms.
 *
 *  You should have received a copy of the AFFERO GNU General Public License
 *  along with GORpipe.  If not, see <http://www.gnu.org/licenses/agpl-3.0.html>
 *
 *  END_COPYRIGHT
 */
#include <stdio.h>

/**
 * Reads a file in gorz format to the out file
 */
extern "C" int read_gorz(FILE* in, FILE* out);

/**
 * Seeks into a gorz to a given genomic position
 */
extern "C" int seek_gorz(FILE* in, FILE* out, char* chr, int s, int e);

/**
 * Reads a tab delimited text file in gor format and writes in gorz format
 */
extern "C" int write_gorz(FILE* in, FILE* out);

/**
 * Compresses the contents of the in buffer (max 32k) as a single gorz line.
 * The last genomic position in the in buffer is the position of the gorz line.
 * All the lines in the in buffer must have the same contig/chromosome.
 */
extern "C" int gorz_buffer(char* in, int size, char* out);

/**
 * Compresses the contents of the in buffer (max 32k) as a single gorz line.
 * The index of the last genomic position is given as a parameter.
 */
extern "C" int gorz_buffer_pos(char* in, int size, char* pos, int poslen, char* out);

/**
 * Compresses the contents of the in buffer (max 32k) and writes as a single gorz to the output file.
 * The last genomic position in the in buffer is the position of the gorz line.
 * All the lines in the in buffer must have the same contig/chromosome.
 */
extern "C" int gorz_file(char* in, int size, FILE* out);

/**
 * Compresses the contents of the in buffer (max 32k) and writes as a single gorz line to the output file.
 * The index of the last genomic position is given as a parameter.
 */
extern "C" int gorz_file_pos(char* in, int size, char* pos, int poslen, FILE* out);