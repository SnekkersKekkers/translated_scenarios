BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(22,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C22_HIKARU_A",0.01);
    ChOpen(22,254,0,2,0,#1,#1,0,0);
    Wait(15,0);
    ScrFadeIn(0);
    VoicePlay("H3A2200001_22_000");
    MsgDisp("Hikaru","It's too bad, right?
I thought Mari could win...");
    MsgDisp("主人公","｛ひかる＊｝...
I'm sorry you had to see me so uncool.");
    ChEye(22,2);
    ChMouth(22,0);
    ChMotion(22,3,1);
    VoicePlay("H3A2200001_22_010");
    MsgDisp("Hikaru","No, it was still super cool～!
Because Mari's number one!");
    MsgDisp("主人公","(｛ひかる＊｝...
I'm glad I worked so hard at judo club.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C22_HIKARU_A",0.01);
    ChOpen(22,254,0,2,2,#1,#1,0,0);
    Wait(15,0);
    ScrFadeIn(0);
    VoicePlay("H3A2200001_22_020");
    MsgDisp("Hikaru","Mari...");
    MsgDisp("主人公","｛ひかる＊｝.
I lost...");
    ChMouth(22,0);
    ChMotion(22,0,1);
    VoicePlay("H3A2200001_22_030");
    MsgDisp("Hikaru","Yeah.
But it was really cool.
Hikaru almost started crying.");
    MsgDisp("主人公","Thank you.");
    ChEye(22,4);
    ChMouth(22,0);
    ChMotion(22,2,1);
    ChEyeOpenLevel(22,0);
    VoicePlay("H3A2200001_22_040");
    MsgDisp("Hikaru","You might've lost the match, but Hikaru
still has the strong and cool Mari burned
in her mind.");
    ChEye(22,4);
    ChMouth(22,0);
    ChMotion(22,0,1);
    VoicePlay("H3A2200001_22_050");
    MsgDisp("Hikaru","I won't ever forget, okay?
Mari's bravery.");
    MsgDisp("主人公","(｛ひかる＊｝...
Yeah, I'm glad I worked so hard at judo
club.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
