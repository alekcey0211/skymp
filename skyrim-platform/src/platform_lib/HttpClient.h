#pragma once
#include <functional>
#include <memory>
#include <utility>
#include <vector>

class HttpClient
{
public:
  HttpClient();
  void Update();

  struct HttpResult
  {
    std::vector<uint8_t> body;
    int32_t status = 0;
  };

  using Headers = std::vector<std::pair<std::string, std::string>>;

  using OnComplete = std::function<void(HttpResult)>;

  void Get(const char* host, const char* path, const Headers& headers,
           OnComplete callback);
  void Post(const char* host, const char* path, const char* body,
            const char* contentType, const Headers& headers,
            OnComplete callback);

private:
  struct Impl;
  std::shared_ptr<Impl> pImpl;
};
