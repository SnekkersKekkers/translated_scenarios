BGOpen("sc230",0);
MsgClose();
BGMPlay("BGM_C03_HONDA_A");
ChOpen(3,254,0,0,0,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","Ah, ｛本多＊＊｝!
Are you free?");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("L040300000_03_000");
    MsgDisp("Honda","Hm? What's up?");
    SEPlay("EV_SE_665");
    SEWait();
    MsgDisp("主人公","Here you go.
Valentine's chocolate.");
    break ;
    case 3:
    MsgDisp("主人公","Ah, ｛本多＊＊｝!
Are you free?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("L040300000_03_010");
    MsgDisp("Honda","Wait!
Can I guess?");
    ChEye(3,2);
    ChMouth(3,3);
    ChMotion(3,2);
    ChEyeOpenLevel(3,0);
    VoicePlay("L040300000_03_020");
    MsgDisp("Honda","No! I won't.
I'd be awkward if I was wrong.");
    MsgDisp("主人公","Hehe!
Here you go.
Valentine's chocolate.");
    SEPlay("EV_SE_665");
    SEWait();
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Ah, ｛本多＊＊｝!
I was looking for you.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("L040300000_03_030");
    MsgDisp("Honda","Yeah, me too!");
    MsgDisp("主人公","Eh?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("L040300000_03_040");
    MsgDisp("Honda","Today's Valentine's, right?
I've held off on eating chocolate
just for today.");
    MsgDisp("主人公","Huh!?
Well...... here you go.
Go ahead.");
    SEPlay("EV_SE_665");
    SEWait();
    break ;
    default :
    DbgAssert(1);
    break ;
    }
