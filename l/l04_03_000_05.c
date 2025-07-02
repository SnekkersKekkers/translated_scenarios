switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("L040300005_03_000");
    MsgDisp("Honda","Thank you!
......Hm? This is handmade, right?");
    ChMotion(3,4);
    VoicePlay("L040300005_03_010");
    MsgDisp("Honda","Then is this topping something
that you like?");
    MsgDisp("主人公","What?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("L040300005_03_020");
    MsgDisp("Honda","Ah, but I don't really mind this
kind of thing, so it's okay!
I'll eat it.");
    MsgDisp("主人公","(......?
I wonder if it didn't suit ｛本多＊＊｝ 's
taste......)");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("L040300005_03_030");
    MsgDisp("Honda","Ah, it's handmade!
......Haha, I see.");
    MsgDisp("主人公","What is it?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("L040300005_03_040");
    MsgDisp("Honda","Nothing!
You gave it to me,
so I'll give it a try.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("L040300005_03_050");
    MsgDisp("Honda","Thank you very much!");
    MsgDisp("主人公","(Could it be that I added something that
｛本多＊＊｝ doesn't like......?)");
    break ;
    case 4:
    case 5:
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("L040300005_03_060");
    MsgDisp("Honda","Wah, it's handmade!");
    MsgDisp("主人公","I did my best.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("L040300005_03_070");
    MsgDisp("Honda","Yeah, I can tell from how it looks.
But, did you have some trouble?");
    MsgDisp("主人公","?
No, not really?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("L040300005_03_080");
    MsgDisp("Honda","Ah...... is that so?
Then it's fine!");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,4);
    ChEyeOpenLevel(3,0);
    VoicePlay("L040300005_03_090");
    MsgDisp("Honda","I'm just happy to get
handmade chocolate from you!");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("L040300005_03_100");
    MsgDisp("Honda","Then, I'll savor this, okay?
Thanks!");
    MsgDisp("主人公","(......?
I wonder if there was something in it
that he didn't like......)");
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
