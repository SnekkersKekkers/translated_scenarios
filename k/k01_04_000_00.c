BGOpen("ex000",1);
ScrFadeIn(0);
MsgDisp("主人公","Ah, come to think of it, it's almost
｛七ツ森＊｝'s birthday!
What should I do about his present?");
MsgSel("Go buy a present.","Don't buy a present.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","Yeah,
I have to hurry and buy one!");
    break ;
    case 1:
    MsgDisp("主人公","Hm...... I guess I don't really need to
get one.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0);
