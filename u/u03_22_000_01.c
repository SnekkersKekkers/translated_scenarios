ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("U032200001_22_000");
MsgDisp("Hikaru","Hehe▼
Here, this is for you.");
MsgDisp("主人公","A coffee cup?");
ChMotion(22,3,1);
VoicePlay("U032200001_22_010");
MsgDisp("Hikaru","Yup.
It's cute so I just had to buy it for
you♪");
MsgSel("Accept animal print coffee cup","Decline it");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","Thank you!
I'll cherish it.");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("U032200001_22_020");
    MsgDisp("Hikaru","Yepyep!
Hikaru will as well.
Hikaru got the same one as Mari▼");
    SEPlay("EV_SE_083");
    MsgDisp("主人公","(\"I got an animal printed mug!)");
    SEPlay("EV_SE_080");
    MsgDisp("主人公","(I feel like my intuition is getting
stronger......)");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,4,1);
    VoicePlay("U032200001_22_030");
    MsgDisp("Hikaru","Let's play again soon!
A bientot～!");
    MsgDisp("主人公","Okay.
See you later,
｛ひかる＊｝!");
    break ;
    case 1:
    MsgDisp("主人公","I'm sorry but no thanks.");
    ChEye(22,0);
    ChMouth(22,2);
    ChMotion(22,0,1);
    VoicePlay("U032200001_22_040");
    MsgDisp("Hikaru","Oh?
Did you not like it......");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,4,1);
    VoicePlay("U032200001_22_050");
    MsgDisp("Hikaru","Well, whatever then.
See you at school～!");
    MsgDisp("主人公","Okay, see you later.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
