ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("U032200000_22_000");
MsgDisp("Hikaru","I got it!
Right, Hikaru will give you this.");
MsgDisp("主人公","Lipstick?");
ChMotion(22,3,1);
VoicePlay("U032200000_22_010");
MsgDisp("Hikaru","Yep, it smells good.
Thanks for hanging out with me today.");
MsgSel("Accept Camellia Lipstick","Don't accept it");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","Thank you!
I'll treasure it.");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,4,1);
    VoicePlay("U032200000_22_020");
    MsgDisp("Hikaru","Ehehe▼
You'll match with Hikaru♪");
    SEPlay("EV_SE_083");
    MsgDisp("主人公","(I got Camellia lipstick!)");
    SEPlay("EV_SE_080");
    MsgDisp("主人公","(I feel like my sense of fashion is
getting better......)");
    ChMotion(22,3,1);
    VoicePlay("U032200000_22_030");
    MsgDisp("Hikaru","Okay, see you at school!
A bientot～♪");
    MsgDisp("主人公","See you later,
｛ひかる＊｝!");
    break ;
    case 1:
    MsgDisp("主人公","Sorry but......");
    ChEye(22,0);
    ChMouth(22,2);
    ChMotion(22,0,1);
    VoicePlay("U032200000_22_040");
    MsgDisp("Hikaru","Oh, is that not your preference?
Too bad.");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,4,1);
    VoicePlay("U032200000_22_050");
    MsgDisp("Hikaru","It's about time to go now.
See you later～!");
    MsgDisp("主人公","Okay.
See you later,
｛ひかる＊｝.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
