BGOpen("fp720",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_652");
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","Welcome!
......Wait, ｛氷室＊＊｝?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    VoicePlay("I150600000_06_000");
    MsgDisp("Himuro","What?");
    MsgDisp("主人公","Are you...... shopping?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I150600000_06_010");
    MsgDisp("Himuro","What else would I be doing?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("I150600000_06_020");
    MsgDisp("Himuro","But, not here.
......Well, do your best.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    MsgDisp("主人公","(｛氷室＊＊｝......
I wonder what he needed to buy?)");
    break ;
    case 3:
    MsgDisp("主人公","Welcome!
Huh, ｛氷室＊＊｝?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    VoicePlay("I150600000_06_030");
    MsgDisp("Himuro","What?
I can't come here?");
    MsgDisp("主人公","No.
Take your time, okay?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I150600000_06_040");
    MsgDisp("Himuro","Nah......
I'm going home after buying stuff.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,5);
    ChCheek(6,5);
    VoicePlay("I150600000_06_050");
    MsgDisp("Himuro","......Wait, this place......");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I150600000_06_060");
    MsgDisp("Himuro","Is this store aimed
at just women......?");
    MsgDisp("主人公","I don't think there's any rule like 
that, but I guess there is a lot of 
products here that are aimed at women?");
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("I150600000_06_070");
    MsgDisp("Himuro","…………");
    MsgDisp("主人公","What are you looking for?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("I150600000_06_080");
    MsgDisp("Himuro","......Nah, it's fine.
I'll come again some other time.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    SEWait();
    MsgDisp("主人公","(?
Did he really come here to shop?)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Welcome!
......Oh, ｛氷室＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    VoicePlay("I150600000_06_090");
    MsgDisp("Himuro","Working hard?");
    MsgDisp("主人公","Yeah, I guess.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I150600000_06_100");
    MsgDisp("Himuro","Ah, I see.");
    MsgDisp("主人公","Could it be that you came
to check up on me?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,5);
    ChCheek(6,5);
    VoicePlay("I150600000_06_110");
    MsgDisp("Himuro","No way!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I150600000_06_120");
    MsgDisp("Himuro","......I was just a little curious.");
    MsgDisp("主人公","About the store?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("I150600000_06_130");
    MsgDisp("Himuro","Yeah.
......By the way, do you have
any recommendations?");
    MsgDisp("主人公","Hm......
I guess this bead accessory.
You can use it as a keychain, too.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChCheek(6,0);
    VoicePlay("I150600000_06_140");
    MsgDisp("Himuro","......Ah, I see.
I'll keep that in mind.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("I150600000_06_150");
    MsgDisp("Himuro","Well, that's all I had to do.
See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    MsgDisp("主人公","(All he had to do was to ask
for my recommendation......?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChCheek(6,0);
