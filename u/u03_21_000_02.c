ChLayout(1);
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("U032100002_21_000");
MsgDisp("Michiru","Mari, give me your hand.");
MsgDisp("主人公","What's this...?");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("U032100002_21_010");
MsgDisp("Michiru","Camellia perfume.
It has a light scent so it's easy to use
As thanks for today...");
MsgSel("Accept Camellia perfume","Don't accept it");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","Thank you!
I this for me to use,
｛みちる＊｝?");
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("U032100002_21_020");
    MsgDisp("Michiru","Yes.
It smells like Mari.");
    SEPlay("EV_SE_083");
    MsgDisp("主人公","(I got Camellia perfume!)");
    SEPlay("EV_SE_080");
    MsgDisp("主人公","(I feel like I've become a more
considerate person...)");
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,0);
    VoicePlay("U032100002_21_030");
    MsgDisp("Michiru","Thank you for hanging out with me today.
Well then, see you at school.");
    MsgDisp("主人公","Okay.
See you later,
｛みちる＊｝!");
    break ;
    case 1:
    MsgDisp("主人公","I'm sorry but...no thanks.");
    ChEye(21,4);
    ChMouth(21,0);
    ChMotion(21,5);
    VoicePlay("U032100002_21_040");
    MsgDisp("Michiru","Oh okay, you don't like this kind of
thing.
No worries.");
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,0);
    VoicePlay("U032100002_21_050");
    MsgDisp("Michiru","Thanks for today.
See you at school then?");
    MsgDisp("主人公","Yeah.
See you later,
｛みちる＊｝.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
