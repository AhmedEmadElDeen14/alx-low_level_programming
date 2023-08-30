int is_palindrome(char *s) {
  
  if (strlen(s) <= 1) {
    return 1;
  }

  
  if (s[0] != s[strlen(s) - 1]) {
    return 0;
  }

  return is_palindrome(s + 1, s - 1);
}
