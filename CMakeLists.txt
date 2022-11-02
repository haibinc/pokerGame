cmake_minimum_required(VERSION 3.14)
project(playingCard)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Card.cpp Card.h Game.cpp Game.h Deck.cpp Deck.h Suit.cpp Suit.h Rank.cpp Rank.h suitEnum.h rankEnum.h LightCard.cpp LightCard.h CardHand.cpp CardHand.h CardHandScorer.cpp CardHandScorer.h PokerScore.cpp PokerScore.h Scores.h)
add_executable(playingCard ${SOURCE_FILES})
include_directories(/usr/local/include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(playingCard sfml-system sfml-window sfml-graphics sfml-audio sfml-network)