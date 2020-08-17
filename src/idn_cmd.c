/*
  File autogenerated by gengetopt version 2.22.6
  generated with the following command:
  gengetopt --unamed-opts --no-handle-version --no-handle-error --no-handle-help --set-package=idn --input idn.ggo --file-name idn_cmd Makefile.am 

  The developers of gengetopt consider the fixed text that goes in all
  gengetopt output files to be in the public domain:
  we make no copyright claims on it.
*/

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef FIX_UNUSED
#define FIX_UNUSED(X) (void) (X) /* avoid warnings for unused params */
#endif

#include <getopt.h>

#include "idn_cmd.h"

const char *gengetopt_args_info_purpose = "";

const char *gengetopt_args_info_usage = "Usage: idn [OPTION]... [STRING]...";

const char *gengetopt_args_info_versiontext = "";

const char *gengetopt_args_info_description = "";

const char *gengetopt_args_info_full_help[] = {
  "  -h, --help               Print help and exit",
  "      --full-help          Print help, including hidden options, and exit",
  "  -V, --version            Print version and exit",
  "  -s, --stringprep         Prepare string according to nameprep profile",
  "  -d, --punycode-decode    Decode Punycode",
  "  -e, --punycode-encode    Encode Punycode",
  "  -a, --idna-to-ascii      Convert to ACE according to IDNA (default)",
  "  -u, --idna-to-unicode    Convert from ACE according to IDNA",
  "      --allow-unassigned   Toggle IDNA AllowUnassigned flag  (default=off)",
  "      --usestd3asciirules  Toggle IDNA UseSTD3ASCIIRules flag  (default=off)",
  "  -t, --tld                Check string for TLD specific rules\n                             Only for --idna-to-ascii and --idna-to-unicode\n                             (default=on)",
  "      --no-tld             Don't check string for TLD specific rules\n                             Only for --idna-to-ascii and --idna-to-unicode\n                             (default=off)",
  "  -n, --nfkc               Normalize string according to Unicode v3.2 NFKC",
  "  -k, --hidden-nfkc        Hidden parameter for backwards compatibility",
  "  -p, --profile=STRING     Use specified stringprep profile instead\n                             Valid stringprep profiles are: Nameprep iSCSI\n                             Nodeprep Resourceprep trace SASLprep",
  "      --debug              Print debugging information  (default=off)",
  "      --quiet              Silent operation  (default=off)",
    0
};

static void
init_help_array(void)
{
  gengetopt_args_info_help[0] = gengetopt_args_info_full_help[0];
  gengetopt_args_info_help[1] = gengetopt_args_info_full_help[1];
  gengetopt_args_info_help[2] = gengetopt_args_info_full_help[2];
  gengetopt_args_info_help[3] = gengetopt_args_info_full_help[3];
  gengetopt_args_info_help[4] = gengetopt_args_info_full_help[4];
  gengetopt_args_info_help[5] = gengetopt_args_info_full_help[5];
  gengetopt_args_info_help[6] = gengetopt_args_info_full_help[6];
  gengetopt_args_info_help[7] = gengetopt_args_info_full_help[7];
  gengetopt_args_info_help[8] = gengetopt_args_info_full_help[8];
  gengetopt_args_info_help[9] = gengetopt_args_info_full_help[9];
  gengetopt_args_info_help[10] = gengetopt_args_info_full_help[10];
  gengetopt_args_info_help[11] = gengetopt_args_info_full_help[11];
  gengetopt_args_info_help[12] = gengetopt_args_info_full_help[12];
  gengetopt_args_info_help[13] = gengetopt_args_info_full_help[14];
  gengetopt_args_info_help[14] = gengetopt_args_info_full_help[15];
  gengetopt_args_info_help[15] = gengetopt_args_info_full_help[16];
  gengetopt_args_info_help[16] = 0; 
  
}

const char *gengetopt_args_info_help[17];

typedef enum {ARG_NO
  , ARG_FLAG
  , ARG_STRING
} cmdline_parser_arg_type;

static
void clear_given (struct gengetopt_args_info *args_info);
static
void clear_args (struct gengetopt_args_info *args_info);

static int
cmdline_parser_internal (int argc, char **argv, struct gengetopt_args_info *args_info,
                        struct cmdline_parser_params *params, const char *additional_error);


static char *
gengetopt_strdup (const char *s);

static
void clear_given (struct gengetopt_args_info *args_info)
{
  args_info->help_given = 0 ;
  args_info->full_help_given = 0 ;
  args_info->version_given = 0 ;
  args_info->stringprep_given = 0 ;
  args_info->punycode_decode_given = 0 ;
  args_info->punycode_encode_given = 0 ;
  args_info->idna_to_ascii_given = 0 ;
  args_info->idna_to_unicode_given = 0 ;
  args_info->allow_unassigned_given = 0 ;
  args_info->usestd3asciirules_given = 0 ;
  args_info->tld_given = 0 ;
  args_info->no_tld_given = 0 ;
  args_info->nfkc_given = 0 ;
  args_info->hidden_nfkc_given = 0 ;
  args_info->profile_given = 0 ;
  args_info->debug_given = 0 ;
  args_info->quiet_given = 0 ;
}

static
void clear_args (struct gengetopt_args_info *args_info)
{
  FIX_UNUSED (args_info);
  args_info->allow_unassigned_flag = 0;
  args_info->usestd3asciirules_flag = 0;
  args_info->tld_flag = 1;
  args_info->no_tld_flag = 0;
  args_info->profile_arg = NULL;
  args_info->profile_orig = NULL;
  args_info->debug_flag = 0;
  args_info->quiet_flag = 0;
  
}

static
void init_args_info(struct gengetopt_args_info *args_info)
{

  init_help_array(); 
  args_info->help_help = gengetopt_args_info_full_help[0] ;
  args_info->full_help_help = gengetopt_args_info_full_help[1] ;
  args_info->version_help = gengetopt_args_info_full_help[2] ;
  args_info->stringprep_help = gengetopt_args_info_full_help[3] ;
  args_info->punycode_decode_help = gengetopt_args_info_full_help[4] ;
  args_info->punycode_encode_help = gengetopt_args_info_full_help[5] ;
  args_info->idna_to_ascii_help = gengetopt_args_info_full_help[6] ;
  args_info->idna_to_unicode_help = gengetopt_args_info_full_help[7] ;
  args_info->allow_unassigned_help = gengetopt_args_info_full_help[8] ;
  args_info->usestd3asciirules_help = gengetopt_args_info_full_help[9] ;
  args_info->tld_help = gengetopt_args_info_full_help[10] ;
  args_info->no_tld_help = gengetopt_args_info_full_help[11] ;
  args_info->nfkc_help = gengetopt_args_info_full_help[12] ;
  args_info->hidden_nfkc_help = gengetopt_args_info_full_help[13] ;
  args_info->profile_help = gengetopt_args_info_full_help[14] ;
  args_info->debug_help = gengetopt_args_info_full_help[15] ;
  args_info->quiet_help = gengetopt_args_info_full_help[16] ;
  
}

void
cmdline_parser_print_version (void)
{
  printf ("%s %s\n",
     (strlen(CMDLINE_PARSER_PACKAGE_NAME) ? CMDLINE_PARSER_PACKAGE_NAME : CMDLINE_PARSER_PACKAGE),
     CMDLINE_PARSER_VERSION);

  if (strlen(gengetopt_args_info_versiontext) > 0)
    printf("\n%s\n", gengetopt_args_info_versiontext);
}

static void print_help_common(void) {
  cmdline_parser_print_version ();

  if (strlen(gengetopt_args_info_purpose) > 0)
    printf("\n%s\n", gengetopt_args_info_purpose);

  if (strlen(gengetopt_args_info_usage) > 0)
    printf("\n%s\n", gengetopt_args_info_usage);

  printf("\n");

  if (strlen(gengetopt_args_info_description) > 0)
    printf("%s\n\n", gengetopt_args_info_description);
}

void
cmdline_parser_print_help (void)
{
  int i = 0;
  print_help_common();
  while (gengetopt_args_info_help[i])
    printf("%s\n", gengetopt_args_info_help[i++]);
}

void
cmdline_parser_print_full_help (void)
{
  int i = 0;
  print_help_common();
  while (gengetopt_args_info_full_help[i])
    printf("%s\n", gengetopt_args_info_full_help[i++]);
}

void
cmdline_parser_init (struct gengetopt_args_info *args_info)
{
  clear_given (args_info);
  clear_args (args_info);
  init_args_info (args_info);

  args_info->inputs = 0;
  args_info->inputs_num = 0;
}

void
cmdline_parser_params_init(struct cmdline_parser_params *params)
{
  if (params)
    { 
      params->override = 0;
      params->initialize = 1;
      params->check_required = 1;
      params->check_ambiguity = 0;
      params->print_errors = 1;
    }
}

struct cmdline_parser_params *
cmdline_parser_params_create(void)
{
  struct cmdline_parser_params *params = 
    (struct cmdline_parser_params *)malloc(sizeof(struct cmdline_parser_params));
  cmdline_parser_params_init(params);  
  return params;
}

static void
free_string_field (char **s)
{
  if (*s)
    {
      free (*s);
      *s = 0;
    }
}


static void
cmdline_parser_release (struct gengetopt_args_info *args_info)
{
  unsigned int i;
  free_string_field (&(args_info->profile_arg));
  free_string_field (&(args_info->profile_orig));
  
  
  for (i = 0; i < args_info->inputs_num; ++i)
    free (args_info->inputs [i]);

  if (args_info->inputs_num)
    free (args_info->inputs);

  clear_given (args_info);
}


static void
write_into_file(FILE *outfile, const char *opt, const char *arg, const char *values[])
{
  FIX_UNUSED (values);
  if (arg) {
    fprintf(outfile, "%s=\"%s\"\n", opt, arg);
  } else {
    fprintf(outfile, "%s\n", opt);
  }
}


int
cmdline_parser_dump(FILE *outfile, struct gengetopt_args_info *args_info)
{
  int i = 0;

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot dump options to stream\n", CMDLINE_PARSER_PACKAGE);
      return EXIT_FAILURE;
    }

  if (args_info->help_given)
    write_into_file(outfile, "help", 0, 0 );
  if (args_info->full_help_given)
    write_into_file(outfile, "full-help", 0, 0 );
  if (args_info->version_given)
    write_into_file(outfile, "version", 0, 0 );
  if (args_info->stringprep_given)
    write_into_file(outfile, "stringprep", 0, 0 );
  if (args_info->punycode_decode_given)
    write_into_file(outfile, "punycode-decode", 0, 0 );
  if (args_info->punycode_encode_given)
    write_into_file(outfile, "punycode-encode", 0, 0 );
  if (args_info->idna_to_ascii_given)
    write_into_file(outfile, "idna-to-ascii", 0, 0 );
  if (args_info->idna_to_unicode_given)
    write_into_file(outfile, "idna-to-unicode", 0, 0 );
  if (args_info->allow_unassigned_given)
    write_into_file(outfile, "allow-unassigned", 0, 0 );
  if (args_info->usestd3asciirules_given)
    write_into_file(outfile, "usestd3asciirules", 0, 0 );
  if (args_info->tld_given)
    write_into_file(outfile, "tld", 0, 0 );
  if (args_info->no_tld_given)
    write_into_file(outfile, "no-tld", 0, 0 );
  if (args_info->nfkc_given)
    write_into_file(outfile, "nfkc", 0, 0 );
  if (args_info->hidden_nfkc_given)
    write_into_file(outfile, "hidden-nfkc", 0, 0 );
  if (args_info->profile_given)
    write_into_file(outfile, "profile", args_info->profile_orig, 0);
  if (args_info->debug_given)
    write_into_file(outfile, "debug", 0, 0 );
  if (args_info->quiet_given)
    write_into_file(outfile, "quiet", 0, 0 );
  

  i = EXIT_SUCCESS;
  return i;
}

int
cmdline_parser_file_save(const char *filename, struct gengetopt_args_info *args_info)
{
  FILE *outfile;
  int i = 0;

  outfile = fopen(filename, "w");

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot open file for writing: %s\n", CMDLINE_PARSER_PACKAGE, filename);
      return EXIT_FAILURE;
    }

  i = cmdline_parser_dump(outfile, args_info);
  fclose (outfile);

  return i;
}

void
cmdline_parser_free (struct gengetopt_args_info *args_info)
{
  cmdline_parser_release (args_info);
}

/** @brief replacement of strdup, which is not standard */
char *
gengetopt_strdup (const char *s)
{
  char *result = 0;
  if (!s)
    return result;

  result = (char*)malloc(strlen(s) + 1);
  if (result == (char*)0)
    return (char*)0;
  strcpy(result, s);
  return result;
}

int
cmdline_parser (int argc, char **argv, struct gengetopt_args_info *args_info)
{
  return cmdline_parser2 (argc, argv, args_info, 0, 1, 1);
}

int
cmdline_parser_ext (int argc, char **argv, struct gengetopt_args_info *args_info,
                   struct cmdline_parser_params *params)
{
  int result;
  result = cmdline_parser_internal (argc, argv, args_info, params, 0);

  return result;
}

int
cmdline_parser2 (int argc, char **argv, struct gengetopt_args_info *args_info, int override, int initialize, int check_required)
{
  int result;
  struct cmdline_parser_params params;
  
  params.override = override;
  params.initialize = initialize;
  params.check_required = check_required;
  params.check_ambiguity = 0;
  params.print_errors = 1;

  result = cmdline_parser_internal (argc, argv, args_info, &params, 0);

  return result;
}

int
cmdline_parser_required (struct gengetopt_args_info *args_info, const char *prog_name)
{
  FIX_UNUSED (args_info);
  FIX_UNUSED (prog_name);
  return EXIT_SUCCESS;
}


static char *package_name = 0;

/**
 * @brief updates an option
 * @param field the generic pointer to the field to update
 * @param orig_field the pointer to the orig field
 * @param field_given the pointer to the number of occurrence of this option
 * @param prev_given the pointer to the number of occurrence already seen
 * @param value the argument for this option (if null no arg was specified)
 * @param possible_values the possible values for this option (if specified)
 * @param default_value the default value (in case the option only accepts fixed values)
 * @param arg_type the type of this option
 * @param check_ambiguity @see cmdline_parser_params.check_ambiguity
 * @param override @see cmdline_parser_params.override
 * @param no_free whether to free a possible previous value
 * @param multiple_option whether this is a multiple option
 * @param long_opt the corresponding long option
 * @param short_opt the corresponding short option (or '-' if none)
 * @param additional_error possible further error specification
 */
static
int update_arg(void *field, char **orig_field,
               unsigned int *field_given, unsigned int *prev_given, 
               char *value, const char *possible_values[],
               const char *default_value,
               cmdline_parser_arg_type arg_type,
               int check_ambiguity, int override,
               int no_free, int multiple_option,
               const char *long_opt, char short_opt,
               const char *additional_error)
{
  char *stop_char = 0;
  const char *val = value;
  int found;
  char **string_field;
  FIX_UNUSED (field);

  stop_char = 0;
  found = 0;

  if (!multiple_option && prev_given && (*prev_given || (check_ambiguity && *field_given)))
    {
      if (short_opt != '-')
        fprintf (stderr, "%s: `--%s' (`-%c') option given more than once%s\n", 
               package_name, long_opt, short_opt,
               (additional_error ? additional_error : ""));
      else
        fprintf (stderr, "%s: `--%s' option given more than once%s\n", 
               package_name, long_opt,
               (additional_error ? additional_error : ""));
      return 1; /* failure */
    }

  FIX_UNUSED (default_value);
    
  if (field_given && *field_given && ! override)
    return 0;
  if (prev_given)
    (*prev_given)++;
  if (field_given)
    (*field_given)++;
  if (possible_values)
    val = possible_values[found];

  switch(arg_type) {
  case ARG_FLAG:
    *((int *)field) = !*((int *)field);
    break;
  case ARG_STRING:
    if (val) {
      string_field = (char **)field;
      if (!no_free && *string_field)
        free (*string_field); /* free previous string */
      *string_field = gengetopt_strdup (val);
    }
    break;
  default:
    break;
  };


  /* store the original value */
  switch(arg_type) {
  case ARG_NO:
  case ARG_FLAG:
    break;
  default:
    if (value && orig_field) {
      if (no_free) {
        *orig_field = value;
      } else {
        if (*orig_field)
          free (*orig_field); /* free previous string */
        *orig_field = gengetopt_strdup (value);
      }
    }
  };

  return 0; /* OK */
}


int
cmdline_parser_internal (
  int argc, char **argv, struct gengetopt_args_info *args_info,
                        struct cmdline_parser_params *params, const char *additional_error)
{
  int c;	/* Character of the parsed option.  */

  int error_occurred = 0;
  struct gengetopt_args_info local_args_info;
  
  int override;
  int initialize;
  int check_required;
  int check_ambiguity;
  
  package_name = argv[0];
  
  override = params->override;
  initialize = params->initialize;
  check_required = params->check_required;
  check_ambiguity = params->check_ambiguity;

  if (initialize)
    cmdline_parser_init (args_info);

  cmdline_parser_init (&local_args_info);

  optarg = 0;
  optind = 0;
  opterr = params->print_errors;
  optopt = '?';

  while (1)
    {
      int option_index = 0;

      static struct option long_options[] = {
        { "help",	0, NULL, 'h' },
        { "full-help",	0, NULL, 0 },
        { "version",	0, NULL, 'V' },
        { "stringprep",	0, NULL, 's' },
        { "punycode-decode",	0, NULL, 'd' },
        { "punycode-encode",	0, NULL, 'e' },
        { "idna-to-ascii",	0, NULL, 'a' },
        { "idna-to-unicode",	0, NULL, 'u' },
        { "allow-unassigned",	0, NULL, 0 },
        { "usestd3asciirules",	0, NULL, 0 },
        { "tld",	0, NULL, 't' },
        { "no-tld",	0, NULL, 0 },
        { "nfkc",	0, NULL, 'n' },
        { "hidden-nfkc",	0, NULL, 'k' },
        { "profile",	1, NULL, 'p' },
        { "debug",	0, NULL, 0 },
        { "quiet",	0, NULL, 0 },
        { 0,  0, 0, 0 }
      };

      c = getopt_long (argc, argv, "hVsdeautnkp:", long_options, &option_index);

      if (c == -1) break;	/* Exit from `while (1)' loop.  */

      switch (c)
        {
        case 'h':	/* Print help and exit.  */
        
        
          if (update_arg( 0 , 
               0 , &(args_info->help_given),
              &(local_args_info.help_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "help", 'h',
              additional_error))
            goto failure;
          cmdline_parser_free (&local_args_info);
          return 0;
        
          break;
        case 'V':	/* Print version and exit.  */
        
        
          if (update_arg( 0 , 
               0 , &(args_info->version_given),
              &(local_args_info.version_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "version", 'V',
              additional_error))
            goto failure;
          cmdline_parser_free (&local_args_info);
          return 0;
        
          break;
        case 's':	/* Prepare string according to nameprep profile.  */
        
        
          if (update_arg( 0 , 
               0 , &(args_info->stringprep_given),
              &(local_args_info.stringprep_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "stringprep", 's',
              additional_error))
            goto failure;
        
          break;
        case 'd':	/* Decode Punycode.  */
        
        
          if (update_arg( 0 , 
               0 , &(args_info->punycode_decode_given),
              &(local_args_info.punycode_decode_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "punycode-decode", 'd',
              additional_error))
            goto failure;
        
          break;
        case 'e':	/* Encode Punycode.  */
        
        
          if (update_arg( 0 , 
               0 , &(args_info->punycode_encode_given),
              &(local_args_info.punycode_encode_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "punycode-encode", 'e',
              additional_error))
            goto failure;
        
          break;
        case 'a':	/* Convert to ACE according to IDNA (default).  */
        
        
          if (update_arg( 0 , 
               0 , &(args_info->idna_to_ascii_given),
              &(local_args_info.idna_to_ascii_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "idna-to-ascii", 'a',
              additional_error))
            goto failure;
        
          break;
        case 'u':	/* Convert from ACE according to IDNA.  */
        
        
          if (update_arg( 0 , 
               0 , &(args_info->idna_to_unicode_given),
              &(local_args_info.idna_to_unicode_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "idna-to-unicode", 'u',
              additional_error))
            goto failure;
        
          break;
        case 't':	/* Check string for TLD specific rules
        Only for --idna-to-ascii and --idna-to-unicode.  */
        
        
          if (update_arg((void *)&(args_info->tld_flag), 0, &(args_info->tld_given),
              &(local_args_info.tld_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "tld", 't',
              additional_error))
            goto failure;
        
          break;
        case 'n':	/* Normalize string according to Unicode v3.2 NFKC.  */
        
        
          if (update_arg( 0 , 
               0 , &(args_info->nfkc_given),
              &(local_args_info.nfkc_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "nfkc", 'n',
              additional_error))
            goto failure;
        
          break;
        case 'k':	/* Hidden parameter for backwards compatibility.  */
        
        
          if (update_arg( 0 , 
               0 , &(args_info->hidden_nfkc_given),
              &(local_args_info.hidden_nfkc_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "hidden-nfkc", 'k',
              additional_error))
            goto failure;
        
          break;
        case 'p':	/* Use specified stringprep profile instead
        Valid stringprep profiles are: Nameprep iSCSI Nodeprep Resourceprep trace SASLprep.  */
        
        
          if (update_arg( (void *)&(args_info->profile_arg), 
               &(args_info->profile_orig), &(args_info->profile_given),
              &(local_args_info.profile_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "profile", 'p',
              additional_error))
            goto failure;
        
          break;

        case 0:	/* Long option with no short option */
          /* Print help, including hidden options, and exit.  */
          if (strcmp (long_options[option_index].name, "full-help") == 0)
          {
          
          
            if (update_arg( 0 , 
                 0 , &(args_info->full_help_given),
                &(local_args_info.full_help_given), optarg, 0, 0, ARG_NO,
                check_ambiguity, override, 0, 0,
                "full-help", '-',
                additional_error))
              goto failure;
            cmdline_parser_free (&local_args_info);
            return 0;
          
          }
          /* Toggle IDNA AllowUnassigned flag.  */
          else if (strcmp (long_options[option_index].name, "allow-unassigned") == 0)
          {
          
          
            if (update_arg((void *)&(args_info->allow_unassigned_flag), 0, &(args_info->allow_unassigned_given),
                &(local_args_info.allow_unassigned_given), optarg, 0, 0, ARG_FLAG,
                check_ambiguity, override, 1, 0, "allow-unassigned", '-',
                additional_error))
              goto failure;
          
          }
          /* Toggle IDNA UseSTD3ASCIIRules flag.  */
          else if (strcmp (long_options[option_index].name, "usestd3asciirules") == 0)
          {
          
          
            if (update_arg((void *)&(args_info->usestd3asciirules_flag), 0, &(args_info->usestd3asciirules_given),
                &(local_args_info.usestd3asciirules_given), optarg, 0, 0, ARG_FLAG,
                check_ambiguity, override, 1, 0, "usestd3asciirules", '-',
                additional_error))
              goto failure;
          
          }
          /* Don't check string for TLD specific rules
          Only for --idna-to-ascii and --idna-to-unicode.  */
          else if (strcmp (long_options[option_index].name, "no-tld") == 0)
          {
          
          
            if (update_arg((void *)&(args_info->no_tld_flag), 0, &(args_info->no_tld_given),
                &(local_args_info.no_tld_given), optarg, 0, 0, ARG_FLAG,
                check_ambiguity, override, 1, 0, "no-tld", '-',
                additional_error))
              goto failure;
          
          }
          /* Print debugging information.  */
          else if (strcmp (long_options[option_index].name, "debug") == 0)
          {
          
          
            if (update_arg((void *)&(args_info->debug_flag), 0, &(args_info->debug_given),
                &(local_args_info.debug_given), optarg, 0, 0, ARG_FLAG,
                check_ambiguity, override, 1, 0, "debug", '-',
                additional_error))
              goto failure;
          
          }
          /* Silent operation.  */
          else if (strcmp (long_options[option_index].name, "quiet") == 0)
          {
          
          
            if (update_arg((void *)&(args_info->quiet_flag), 0, &(args_info->quiet_given),
                &(local_args_info.quiet_given), optarg, 0, 0, ARG_FLAG,
                check_ambiguity, override, 1, 0, "quiet", '-',
                additional_error))
              goto failure;
          
          }
          
          break;
        case '?':	/* Invalid option.  */
          /* `getopt_long' already printed an error message.  */
          goto failure;

        default:	/* bug: option not considered.  */
          fprintf (stderr, "%s: option unknown: %c%s\n", CMDLINE_PARSER_PACKAGE, c, (additional_error ? additional_error : ""));
          abort ();
        } /* switch */
    } /* while */




  cmdline_parser_release (&local_args_info);

  if ( error_occurred )
    return (EXIT_FAILURE);

  if (optind < argc)
    {
      int i = 0 ;
      int found_prog_name = 0;
      /* whether program name, i.e., argv[0], is in the remaining args
         (this may happen with some implementations of getopt,
          but surely not with the one included by gengetopt) */

      i = optind;
      while (i < argc)
        if (argv[i++] == argv[0]) {
          found_prog_name = 1;
          break;
        }
      i = 0;

      args_info->inputs_num = argc - optind - found_prog_name;
      args_info->inputs =
        (char **)(malloc ((args_info->inputs_num)*sizeof(char *))) ;
      while (optind < argc)
        if (argv[optind++] != argv[0])
          args_info->inputs[ i++ ] = gengetopt_strdup (argv[optind-1]) ;
    }

  return 0;

failure:
  
  cmdline_parser_release (&local_args_info);
  return (EXIT_FAILURE);
}
