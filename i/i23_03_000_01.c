MsgClose();
ChOpen(3,35,0,0,0,-1,-1,0,0);
BGMPlay("BGM_C03_HONDA_A");
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("I230300000_03_000");
    MsgDisp("Honda","Hm?
I heard that there was someone new
coming today, was that you?");
    MsgDisp("主人公","Yes, it's me.
｛本多＊＊｝, I'm looking forward
to working together.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I230300000_03_010");
    MsgDisp("Honda","Me too!
It might be hard to get the hang of
things, so hang in there.");
    MsgDisp("主人公","(Alright, I'll do my best!)");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("I230300000_03_020");
    MsgDisp("Honda","I never thought that we'd ever
be working at the same part-time job.");
    MsgDisp("主人公","Hehe, looking forward to it.");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("I230300000_03_030");
    MsgDisp("Honda","Me too. Did the manager already
show you the ropes?
Should I explain?");
    MsgDisp("主人公","Yeah, could you?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("I230300000_03_040");
    MsgDisp("Honda","Of course. You don't need to
understand everything right away, so
ask me if you have questions, okay?");
    MsgDisp("主人公","Thanks!");
    MsgDisp("主人公","(Alright, I'll do my best!)");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoiceEVSPlay(3);
    VoicePlay("I230300000_03_050");
    MsgDisp("Honda","｛主人公｝.
Welcome.");
    MsgDisp("主人公","｛本多＊＊｝,
you work here?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I230300000_03_060");
    MsgDisp("Honda","Yeah yeah!");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("I230300000_03_070");
    MsgDisp("Honda","But you know, working here made me
realize that bookstores are more work
than you'd expect...... will you be okay?");
    MsgDisp("主人公","I'll be fine...... I think.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("I230300000_03_080");
    MsgDisp("Honda","Haha, sorry for scaring you by
saying that suddenly. You can count on the
manager and me to do the heavy lifting.");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,1,1);
    VoicePlay("I230300000_03_090");
    MsgDisp("Honda","Ah, just saying, but don't expect
to do everything perfectly right away.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,0,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I230300000_03_100");
    MsgDisp("Honda","Just some advice from your senpai.");
    MsgDisp("主人公","(I'm happy my part-time job is
with ｛本多＊＊｝.
Let's do this!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
