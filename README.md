# General-ClauParser
    struct Token {
      uint8_t type;
      size_t length;
      int64_t str_start;
      ...
    };

    Utility::GetType(token)
    Utility::GetLength(token)
    Utility::GetStrStart(token)
