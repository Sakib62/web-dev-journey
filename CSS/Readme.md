
# CSS

### Types

- Inline
- Internal
- External

### Debug CSS code

- link with correct file name and address
- identify selector priority

### Anatomy of CSS syntax

- ```text
    who {
        what : how
    }
    ```

### Selector

- tag
- class
- id
- pseudo

### Docs

- MDN
- Devdocs
- W3school

### Useful Link

- <https://www.appbrewery.co/p/web-development-course-resources>
- <https://web.archive.org/web/20180819202235js_/http://seanhalpin.io/>
- <https://www.colorhunt.co>
- <https://www.favicon.cc/>
- <https://css3buttongenerator.com/>


### div

- For structuring and design.
- Divide content into separate boxes, affect layout separately.
- Appears only when css is applied -> need to specify dimension in case of no content inside.
- If dimension is unspecified, div will have required height and width to fit the content.

### Box Model

Every html element is treated as a box by css

- content
- padding :: between content and border
- border :: does not takes up space from the size of the element. //border-width : 0 10px 20px 30px [TRBL]
- margin
  - margin : 10px // all four directions
  - margin : 1px 2px // Top-Bottom, Left-Right
  - margin : 1px 3px 4px // Top, Left-Right, Bottom
  - margin : 4px 5px 6px 7px // Top, Right, Bottom, Left // clockwise
  - margin : auto // Top-Bottom : 0 margin, Box is horizontally centered.


### Display Property

display can be changed

- inline :: span, anchor, img //span like div don't do very much unless used in conjunction with css
- block :: div, heading, p, form, ul-ol-li
- inline-block :: img //can change width, and be on same line with others
- none // removed from document flow, if visibility : hidden is used, it's position slot is kept but becomes invisible.

Position of elements are determined by many things, box model, margin, border, dimension, display property etc.

### Default Styling Without CSS

1. width, height depends on content
2. order comes from html code
3. children sit on top of parents -> closer to viewer and away from screen. Z index, which on top of which
- ```html
    <div>
        <h1>a <span>pro</span>grammer</h1>
    </div>
    ```
    from screen to viewer :: div -> h1 -> span

### Position

- static :: as per document flow.
- relative :: top, bottom, right, left.
  - Relative to where it should be if it were static. right : 200px means a margin of 200px from the right edge of where it actually should be as per the document flow.
  - ```Does not affect other html elements flow.``` Element's old position slot is kept and other elements position does not change.
- absolute
  - Absolute to parents. right : 200px means a margin of 200px from parent's right. Parent does not have to be the 'body'. ```Can be the closest parent that has a relative position.```
  - Affects other elements flow. ```The element's position slot is taken away and other elements fill in.```
  - Easier to move things around with absolute positioning?
  - combination of both relative and absolute, use container to fine tune layout.
- fixed :: fixed in position when scrolling

**Using div/container, box model, display property, positioning to perfect the layout.**

### Center

- text-align: center; centers everything that does not have a width;
- If the element has width (block element), center it using auto margin.
- margin : 0 auto 0 auto; [TRBL]. // 0 auto [TB, LR]


### Font

- font-family :: serif, sans-serif, monospace, cursive, fantasy
- web safe font, fallback. <https://www.cssfontstack.com/>
- embed font. <https://fonts.google.com/>

### Content

- Lorem ipsum is a placeholder text commonly used to demonstrate the visual form of a document or a typeface without relying on meaningful content.
- Typing lorem in vscode, will show up the paragraph via emmet abbreviation
- icons <https://www.flaticon.com/>
- animated gif/sticker <https://giphy.com/>

### Font-size

- ```px, %, em, rem```
- px is static, % and em are dynamic
- % and em are inherited and added on top of parent
- 16px = 100% = 1em
- rem depends on root only, not on any parent/container size. Does not get affected by upstream size changes.
- rem - most adaptable, reliable, less error-prone
- margin, padding, border etc. sizing better in px?? better visualization in box model??
- line-height : 2 // number without unit is preferred as value. <https://developer.mozilla.org/en-US/docs/Web/CSS/line-height#prefer_unitless_numbers_for_line-height_values>


### Float and Clear

- float: contents wrap around an element. Use if necessary. Not to use for positioning.
- clear: does not wrap

<hr><hr>

### Media Query

- ```css
    @media not|only mediatype and (media feature) and (media feature) {
      CSS-Code;
    }
  ```
- Types : all, print, screen
- features : orientation, max-height, min-height, height, max-width, min-width, width
- not: This keyword inverts the meaning of an entire media query.
- and: This keyword combines a media type and one or more media features.


### Combinators

A CSS selector can contain more than one simple selector. Between the simple selectors, we can include a combinator.

There are four different combinators in CSS:

- descendant selector (space)
- child selector (>)
- adjacent sibling selector (+)
- general sibling selector (~)

### CSS writing guide

- comment out what the following section of css contains
- less to more specific
- media query at the end?
- properties in alphabetical order?
- id can be used to navigate in the page in a particular section
- keep your code DRY. Refactor code on regular basis.

### Refactoring

- Readability
- Modularity : to easily detect error source and modify
- Efficiency
- Length

Refactor as you code. Specific styling.

### UI

- Hierarchy - via color, size
- Layout - 40-60 chars per line
- Alignment - reduce the number of line that goes through beginning of each item. Use grid lines, visualize starting point and try to line them up.
- Whitespace - add space around element, make design minimalist, elevated.
- Audience

### UX

- Simplicity
- Consistency such as navbar with same elements and positions, muscle memory to be applied
- Reading Patterns - F or Z
- All platform design
- Don't use dark pattern :: To make user perform a action that they don't want

### Core things to know

- Selectors [done]
- Units [done]
- Positions [done]
- Box Model [done]
- Layout, Alignment [done]
- Colors, Fonts, Icons [done]

Practice

- Flexbox froggy

Design Principles

- Refactoring UI

### Todo

- Facebook HomePage
- Youtube HomePage
- Portfolio Site
- Own Projects UI