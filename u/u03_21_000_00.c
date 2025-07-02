ChLayout(1);
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("U032100000_21_000");
MsgDisp("Michiru","Hey, is this something you like?");
MsgDisp("主人公","That's......a handbag?");
ChMotion(21,3);
VoicePlay("U032100000_21_010");
MsgDisp("Michiru","Yeah. I was lucky and got two of
them in limited edition. Do you want one
as thanks for today?");
MsgSel("Accept limited edition bag","Decline it");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","Oh, thank you!
I'll cherish it.");
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,0);
    VoicePlay("U032100000_21_020");
    MsgDisp("Michiru","No problem. 
Hehe, let's match with each other.");
    SEPlay("EV_SE_083");
    MsgDisp("主人公","(\"I got a limited edition
handbag!)");
    SEPlay("EV_SE_080");
    MsgDisp("主人公","(I feel like my fashion sense
has become better......)");
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,4);
    VoicePlay("U032100000_21_030");
    MsgDisp("Michiru","Ok then, let's end here today.
See you later?");
    MsgDisp("主人公","｛みちる＊｝, see you soon!");
    break ;
    case 1:
    MsgDisp("主人公","I'm sorry but no......");
    ChEye(21,0);
    ChMouth(21,4);
    ChMotion(21,0);
    VoicePlay("U032100000_21_040");
    MsgDisp("Michiru","Mari doesn't like it?
Understood.");
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,3);
    VoicePlay("U032100000_21_050");
    MsgDisp("Michiru","Well then, it's about time to
leave. See you at school.");
    MsgDisp("主人公","Okay.
See you later, ｛みちる＊｝.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
