switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,5);
    ChMouth(3,5);
    ChMotion(3,5);
    VoicePlay("L040300006_03_000");
    MsgDisp("Honda","Wawah!?");
    MsgDisp("主人公","Huh?");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("L040300006_03_010");
    MsgDisp("Honda","Da, that surprised me...
It was more powerful than I expected, I
just...");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("L040300006_03_020");
    MsgDisp("Honda","I'll look at it more closely at home,
okay?
Thanks.");
    MsgDisp("主人公","(Just looking...?
Ugh, I should've tried harder.)");
    break ;
    case 3:
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("L040300006_03_030");
    MsgDisp("Honda","Ah... it's handmade?");
    MsgDisp("主人公","Y-Yeah.
How is it?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("L040300006_03_040");
    MsgDisp("Honda","Yeah.
I can tell you did your best.");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("L040300006_03_050");
    MsgDisp("Honda","But, you might lack the skills to make
chocolate.
My sister used to be the same way.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("L040300006_03_060");
    MsgDisp("Honda","Thanks to that, this feels very nostalgic.
Thanks.");
    MsgDisp("主人公","(Ugh...
I should've tried harder...)");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("L040300006_03_070");
    MsgDisp("Honda","I see, that's come.");
    MsgDisp("主人公","｛本多＊＊｝?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoiceEVSPlay(3);
    VoicePlay("L040300006_03_080");
    MsgDisp("Honda","｛主人公｝.
Let's make it together next year!");
    MsgDisp("主人公","What?");
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("L040300006_03_090");
    MsgDisp("Honda","I'm not sure if I can do it well, but I
help my sister every year, and I know all
the tricks, okay?");
    ChEye(3,1);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("L040300006_03_100");
    MsgDisp("Honda","If nothing else, we can try making them
from cacao beans!
I've always wanted to try.");
    MsgDisp("主人公","Okay... sorry I couldn't make them well.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,5);
    VoicePlay("L040300006_03_110");
    MsgDisp("Honda","Da, don't apologize!
I'm happy enough from your feelings.");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("L040300006_03_120");
    MsgDisp("Honda","So, I don't want Valentine's to be a bad
memory for you.");
    MsgDisp("主人公","｛本多＊＊｝...
Thank you.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("L040300006_03_130");
    MsgDisp("Honda","Why are you thanking me?
I should be thanking you.
Thanks for trying your best.");
    MsgDisp("主人公","(｛本多＊＊｝ is so nice...
I wish I did better...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
