#include<iostream>
#include<vector>
using namespace std;
struct node
{
    std::string name;
    std::vector<node*>children;
};
node*create node( const std::string&name)
{
    node*new node=new node;
    new node->name=name;
    return new node;
}
void prin nodes(node*node,int depth=0)
{
     nodestd::count<<node->name<<std::endl;

    for( node*child:node->children)
    {
        print nodes(child,depth+1);
    }
}
int main()
{
    node*book=create node( "book");

    node*chapter1_1= create node( "chapter 1");
    node*section_1=create node( " section 1.1");
    node*subsection1_1_1=createnode( "subsection 1.1.1");
    node*subsection1_1_2=create node( " subsection 1.1.2");
    section1_1-> children.push_back(subsection1_1_1);
    section1_1-> children.push_back( subsection1_1_2);
    
    node*section1_2= create node("section1.2");
    node*section1_2_1= create node( "section1.2.1");
    node*subsection1_2_2= create node( " section 1.2.2");
    section1_2->children.push_back( subsection1_1_2);
    section1_2->children.push_back( subsection1_2_2);
    
    chapter1->children.push_back(section1_1);
    chapter1->children.push_back(section1_2);
    
    node*chapter2= create node("chapter 2");
    node *section2_1= create node("section2.1");
    node*subsection2_1_1= create node("subsection2.1.1");
    node*subsection2_1_2= create node("subsection2.1.1");
    section2_1->children.push_back(section2_1_1);
    section2_1->children.push_back(subsection2_1_2);
    
    chapter2->children.push_back(section2_1);
    
    book->children.push_back(chapter1);
    book->children.push_back(chapter2);
    
    print nodes(book);
    return 0;
    }