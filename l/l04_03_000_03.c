switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChMouth(3,5);
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("L040300003_03_000");
    MsgDisp("Honda","Wow, amazing!
Which shop did you order these decorations
from?");
    MsgDisp("主人公","It's handmade, you know?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("L040300003_03_010");
    MsgDisp("Honda","What!?
You did, for me?
I feel a little bad.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("L040300003_03_020");
    MsgDisp("Honda","But, I'll savor every bite.
Thank you!");
    MsgDisp("主人公","(It was worth the effort to make this
myself.)");
    break ;
    case 3:
    ChEye(3,5);
    ChMouth(3,5);
    ChMotion(3,5);
    VoicePlay("L040300003_03_030");
    MsgDisp("Honda","Wah, handmade!?");
    MsgDisp("主人公","I did my best.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("L040300003_03_040");
    MsgDisp("Honda","Yeah, I can see that! Because this has my
taste and preferences in it, too! It's
almost a waste to eat it.");
    MsgDisp("主人公","Hehe, make sure to eat it, okay?");
    ChEye(3,3);
    ChMotion(3,4);
    ChEyeOpenLevel(3,0);
    VoicePlay("L040300003_03_050");
    MsgDisp("Honda","Yeah, you're right.
I'll eat it gratefully!");
    MsgDisp("主人公","(｛本多＊＊｝ seemed really happy!)");
    break ;
    case 4:
    case 5:
    ChEye(3,3);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("L040300003_03_060");
    MsgDisp("Honda","Wah......");
    MsgDisp("主人公","I did my best to make them.
How are they?");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("L040300003_03_070");
    MsgDisp("Honda","............");
    MsgDisp("主人公","｛本多＊＊｝?");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,1);
    VoicePlay("L040300003_03_080");
    MsgDisp("Honda","Ah, sorry!");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("L040300003_03_090");
    MsgDisp("Honda","I've been waiting for this since morning,
but now that I have the chocolate, I'm
speechless. Weird, huh?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,0);
    VoicePlay("L040300003_03_100");
    MsgDisp("Honda","Do people stop thinking if they're too
happy?");
    MsgDisp("主人公","Hehe, seems that way.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("L040300003_03_110");
    MsgDisp("Honda","Yeah, definitely!
Thank you so much!
I'll savor it, okay?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("L040300003_03_120");
    MsgDisp("Honda","I got it!
Before I eat it, can we take a picture
with the chocolate?");
    MsgDisp("主人公","(｛本多＊＊｝ seemed really happy!
I did it!!)");
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
