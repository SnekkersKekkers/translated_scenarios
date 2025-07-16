MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
BGOpen("ex020",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoiceEVSPlay(3);
    VoicePlay("S120300000_03_000");
    MsgDisp("Honda","｛主人公｝, aren't you
tired from all the walking?");
    MsgDisp("主人公","It's okay, I'm fine.
Is ｛本多＊＊｝ okay?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S120300000_03_010");
    MsgDisp("Honda","Yeah.
I have to go fishing with my dad tonight.
So, cya later!");
    MsgClose();
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
    MsgClose();
    ChClose(3);
    Wait(30);
    MsgDisp("主人公","(It was fun visiting the shrine.
I hope this year is another good
year......)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S120300000_03_020");
    MsgDisp("Honda","Phew!
There were a lot of people, but it was
fun!");
    MsgDisp("主人公","Yeah! I got to talk to
｛本多＊＊｝ about a lot of
things. It was fun.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("S120300000_03_030");
    MsgDisp("Honda","Yeah, for me too!
I want to talk more, so let me walk you
home?");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    case 4:
    case 5:
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S120300000_03_040");
    MsgDisp("Honda","I guess it's finally the end of this
year's shrine visit.");
    MsgDisp("主人公","Yeah, it was fun.");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("S120300000_03_050");
    MsgDisp("Honda","I wanted to chat with you more.");
    MsgDisp("主人公","Really?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("S120300000_03_060");
    MsgDisp("Honda","You too? In that case, I have no choice
but to walk you home. Let's go!");
    MsgDisp("主人公","Yeah!");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
ChEyeOpenLevel(3,#1);
ChCheek(3,0);
