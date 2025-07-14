switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    ChEye(8,0);
    ChMouth(8,3);
    VoicePlay("L040800004_08_000");
    MsgDisp("Shirahane","Ah, it's handmade!");
    MsgDisp("主人公","Yeah.
I did my best to make it. How is it?");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("L040800004_08_010");
    MsgDisp("Shirahane","Looks delish!
Lookin' forward to diggin' in♪");
    MsgDisp("主人公","(Thank goodness.
He seemed happy!)");
    BGMStop();
    break ;
    case 3:
    ChEye(8,0);
    ChMouth(8,5);
    ChMotion(8,1,1);
    ChEyeOpenLevel(8,10);
    VoicePlay("L040800004_08_020");
    MsgDisp("Shirahane","Ah, this handmade?");
    MsgDisp("主人公","Yes, I did my best.");
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("L040800004_08_030");
    MsgDisp("Shirahane","I see.
Looks super delish!");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("L040800004_08_040");
    MsgDisp("Shirahane","You're a good one, aren'tcha?
Thanks!");
    MsgDisp("主人公","(He seemed happy!
Thank goodness!)");
    BGMStop();
    break ;
    case 4:
    case 5:
    ChEye(8,3);
    ChMouth(8,5);
    ChMotion(8,1,1);
    ChEyeOpenLevel(8,10);
    ChCheek(8,8);
    VoicePlay("L040800004_08_050");
    MsgDisp("Shirahane","Wow...... Handmade chocolate!");
    MsgDisp("主人公","Yeah, I did my best to make it.");
    ChEye(8,4);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("L040800004_08_060");
    MsgDisp("Shirahane","You did good.
You really can do anything.");
    MsgDisp("主人公","Hehe, thanks.");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("L040800004_08_070");
    VoiceEVSPlay(8);
    MsgDisp("Shirahane","I should be thankin' you.
Really, thanks, ｛主人公｝.");
    ChEye(8,4);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("L040800004_08_080");
    MsgDisp("Shirahane","Looks so good, I wanna eat it right
now......");
    ChEye(8,4);
    ChMouth(8,0);
    ChMotion(8,4,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("L040800004_08_090");
    MsgDisp("Shirahane","Hmm. But I'd need to eat it all. What a
pickle......");
    ChEyeOpenLevel(8,#1);
    MsgDisp("主人公","Hehe. But it can go bad, so eat it quick,
okay?");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,1,1);
    VoicePlay("L040800004_08_100");
    MsgDisp("Shirahane","That's true!
Then, I'll need to go braggin' to everyone
first!");
    MsgClose();
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
    BGMStop();
    ChClose(8,0,30);
    MsgDisp("主人公","(There he goes......
But, he seemed really happy!
Thank goodness!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(8,0,0);
