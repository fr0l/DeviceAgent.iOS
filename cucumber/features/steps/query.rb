
Then(/^I query for the Silly Alpha button by mark using id$/) do
  elements = @gestures.query({marked: "alpha button"})
  expect(elements.count).to be == 1
  expect(elements[0]["id"]).to be == "alpha button"
end

Then(/^I query for the Silly Zero button by mark using the title$/) do
  elements = @gestures.query({marked: "Alpha"})
  expect(elements.count).to be == 1
  expect(elements[0]["id"]).to be == "alpha button"
end

Then(/^I find the button behind the purple label using marked and :all$/) do
  elements = @gestures.query({marked: "hidden button", all: true})
  expect(elements.count).to be == 1
  expect(elements[0]["id"]).to be == "hidden button"
end

But(/^I cannot find the button behind the purple label using marked without :all$/) do
  elements = @gestures.query({marked: "hidden button", all: false})
  expect(elements.count).to be == 0
end

Then(/^I query for Same as views by mark using id$/) do
  elements = @gestures.query({marked: "same as"})
  expect(elements.count).to be == 7
end

Then(/^I query for Same as views by mark using id and filter by TextField$/) do
  elements = @gestures.query({marked: "same as", :type => "TextField"})
  expect(elements.count).to be == 2
end

Then(/^I query for Same as views by mark using id and filter by TextView$/) do
  elements = @gestures.query({marked: "same as", :type => "TextView"})
  expect(elements.count).to be == 2
end

Then(/^I query for Same as views by mark using id and use an index to find the Button$/) do
  elements = @gestures.query({marked: "same as", :type => "Button"})
  expect(elements.count).to be == 1
  expected = elements[0]
  expected["test_id"] = nil

  elements = @gestures.query({marked: "same as", :index => 5})
  expect(elements.count).to be == 1
  actual = elements[0]
  actual["test_id"] = nil

  expect(actual).to be == expected
end

Then(/^I query for the 110 percent by text and mark$/) do
  elements = @gestures.query({text: "110%"})
  expect(elements.count).to be == 1

  elements = @gestures.query({marked: "110%"})
  expect(elements.count).to be == 1
end

Then(/^I query for the text with a question mark$/) do
  elements = @gestures.query({text: "LIKE?"})
  expect(elements.count).to be == 1

  elements = @gestures.query({marked: "LIKE?"})
  expect(elements.count).to be == 1
end

Then(/^I query for Karl's Problem using a backslash to escape the quote$/) do
  elements = @gestures.query({marked: "Karl\'s Problem"})
  expect(elements.count).to be == 1

  elements = @gestures.query({text: "Karl\'s Problem"})
  expect(elements.count).to be == 1
end

Then(/^I query for Karl's Problem without a backslash$/) do
  elements = @gestures.query({marked: "Karl's Problem"})
  expect(elements.count).to be == 1

  elements = @gestures.query({text: "Karl's Problem"})
  expect(elements.count).to be == 1
end

Then(/^I query for the text in quotes using backslashes$/) do
  elements = @gestures.query({marked: "\"quoted\""})
  expect(elements.count).to be == 1

  elements = @gestures.query({text: "\"quoted\""})
  expect(elements.count).to be == 1
end

Then(/^I query for the text in quotes without using backslashes$/) do
  elements = @gestures.query({marked: %Q["quoted"]})
  expect(elements.count).to be == 1

  elements = @gestures.query({text: %Q["quoted"]})
  expect(elements.count).to be == 1
end

Then(/^I query for the label with the TAB by escaping the tab char$/) do
  elements = @gestures.query({marked: "TAB:\tchar"})
  expect(elements.count).to be == 1

  elements = @gestures.query({text: "TAB:\tchar"})
  expect(elements.count).to be == 1
end

Then(/^I query for the label with the TAB without escaping the tab char$/) do
  elements = @gestures.query({marked: "TAB:	char"})
  expect(elements.count).to be == 1

  elements = @gestures.query({text: "TAB:	char"})
  expect(elements.count).to be == 1
end

Then(/^I query for newlines using backslashes$/) do
  elements = @gestures.query({marked: "Here\nthere be\nnewlines"})
  expect(elements.count).to be == 0

  string = %Q[Here
there be
newlines]
  elements = @gestures.query({marked: string})
  expect(elements.count).to be == 0
end

Then(/^I can query for Japanese$/) do
  elements = @gestures.query({text: "こんにちは！"})
  expect(elements.count).to be == 1
end
