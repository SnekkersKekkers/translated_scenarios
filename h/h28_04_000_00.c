ChLayout(1);
MsgClose();
ScrFadeIn(0);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
switch (ChPrmGet(4,6)){
    case 3:
    VoicePlay("H280400000_04_000");
    MsgDisp("Nanatsumori","You're working hard.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝!
What's...");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("H280400000_04_010");
    MsgDisp("Nanatsumori","You're going to ask that here?
I decided to come support you.");
    MsgDisp("主人公","Really?
Thank you!");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("H280400000_04_020");
    MsgDisp("Nanatsumori","Well, not like you're the one going out
there, though. This is your last job as
manager, right? Go and do your best.");
    MsgDisp("主人公","(Alright, let's do our best!)");
    break ;
    case 4:
    case 5:
    VoiceEVSPlay(4);
    VoicePlay("H280400000_04_030");
    MsgDisp("Nanatsumori","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝!
Did you come to cheer us on?");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,2,1);
    VoicePlay("H280400000_04_040");
    MsgDisp("Nanatsumori","Well, that's how it is.
... I don't know much about track,
though.");
    MsgDisp("主人公","Hm?");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("H280400000_04_050");
    MsgDisp("Nanatsumori","Nothing.
This is your last job as manager, right?");
    MsgDisp("主人公","Yeah, that's right...");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("H280400000_04_060");
    MsgDisp("Nanatsumori","Then, I'll be cheering you on.
In my heart, from my seat in the audience,
okay?");
    MsgDisp("主人公","Hehe, thanks.");
    ChEye(4,4);
    ChMotion(4,0,1);
    VoicePlay("H280400000_04_070");
    MsgDisp("Nanatsumori","Yeah.
Go and do your best, manager.");
    MsgDisp("主人公","(Alright, let's do our best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4);
