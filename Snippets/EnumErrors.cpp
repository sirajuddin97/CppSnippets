enum Errors{
  INVALID_CMD = 1,
  EMPTY_QUEUE
};

const char* ErrorOutput(Errors e){
  const char* errorMessage;
  switch (e){
    case 1:
      errorMessage = "Hei dette er en test";
      break;
    case 2:
      errorMessage = "EMPTY_QUEUE";
      break;
    default:
      errorMessage = "DEFAULT";
      break;
  }
  return errorMessage;
}
