BGOpen("ar300",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛大地＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    ChOpen(8,35,0,0,4,-1,-1,0,0);
    VoiceEVSPlay(8);
    VoicePlay("L040800000_08_000");
    MsgDisp("Shirahane","｛主人公｝.
What's up with you today?");
    SEPlay("EV_SE_665");
    SEWait();
    MsgDisp("主人公","Today's Valentine's, right?
So I came to give you chocolate.");
    break ;
    case 3:
    MsgDisp("主人公","｛大地＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    ChOpen(8,35,0,0,4,-1,-1,0,0);
    VoiceEVSPlay(8);
    VoicePlay("L040800000_08_010");
    MsgDisp("Shirahane","｛主人公｝.
What's the matter?
Need somethin' with me?");
    MsgDisp("主人公","Yeah, something
to do with you, ｛大地＊＊｝.");
    ChEye(8,2);
    ChMouth(8,4);
    ChMotion(8,2,1);
    VoicePlay("L040800000_08_020");
    MsgDisp("Shirahane","Huh......
Did we have somethin' planned......?");
    MsgDisp("主人公","No, nothing like that.
Here.
I brought you Valentine's chocolates.");
    SEPlay("EV_SE_665");
    SEWait();
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("L040800000_08_030");
    MsgDisp("Shirahane","Huh...... for me?
Yayー!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛大地＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    ChOpen(8,35,0,4,4,-1,-1,6,0);
    VoicePlay("L040800000_08_040");
    VoiceEVSPlay(8);
    MsgDisp("Shirahane","Ah...... ｛主人公｝.");
    MsgDisp("主人公","Thank goodness, you're here.
I came because I wanted to give
you something, ｛大地＊＊｝.");
    ChMotion(8,2,1);
    VoicePlay("L040800000_08_050");
    MsgDisp("Shirahane","Could I get my hopes up......?");
    MsgDisp("主人公","Hehe.
Here you go.
Valentine's chocolate!");
    SEPlay("EV_SE_665");
    SEWait();
    ChEye(8,4);
    ChMouth(8,0);
    ChMotion(8,3,1);
    ChCheek(8,8);
    VoicePlay("L040800000_08_060");
    MsgDisp("Shirahane","Yay!");
    MsgDisp("主人公","Hehe!");
    ChEye(8,3);
    ChMouth(8,0);
    ChMotion(8,0,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("L040800000_08_070");
    MsgDisp("Shirahane","Actually, I was really lookin'
forward t' this.
Heheh!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
