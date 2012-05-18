/* Copyright (c) 2012 the authors listed at the following URL, and/or
the authors of referenced articles or incorporated external code:
http://en.literateprograms.org/Binary_search_tree_(C)?action=history&offset=20090103192554

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Retrieved from: http://en.literateprograms.org/Binary_search_tree_(C)?oldid=15737
*/

#ifndef _BST_H_

/* Returns negative (left<right), zero (left==right), or positive (left>right). */
typedef int comparator(void* left, void* right);
struct bst_node {
    void* data;
    struct bst_node* left;
    struct bst_node* right;
};

struct bst_node* new_node(void* data);
void free_node(struct bst_node* node);
struct bst_node** search(struct bst_node** root, comparator compare, void* data);
void insert(struct bst_node** root, comparator compare, void* data);
void delete(struct bst_node** node);

#endif

