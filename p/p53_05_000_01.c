BGMStop();
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(I think I'm a little calmer than last
year.
But, as expected I'm nervous still.)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("P530500001_05_000");
    MsgDisp("Hiiragi","｛主人公｝, I came to listen.
To gaming music.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝!
Thank you.
But, my heart is racing.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P530500001_05_010");
    MsgDisp("Hiiragi","Yes, that's a positive trend.");
    MsgDisp("主人公","Eh, it is?");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P530500001_05_020");
    MsgDisp("Hiiragi","Yes, I also get nervous each time I
perform. It all comes from the sense of
expectation.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P530500001_05_030");
    MsgDisp("Hiiragi","I don't know what's going to happen, but
it might be better than I assumed?");
    MsgDisp("主人公","I see.
Better than assumed...");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P530500001_05_040");
    MsgDisp("Hiiragi","Yes. The fact that your heart is racing,
might be an omen that a wonderful surprise
is going occur.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P530500001_05_050");
    MsgDisp("Hiiragi","So, go forth with your heart racing.");
    MsgDisp("主人公","Yes!");
    MsgDisp("主人公","(Alright, let's give it our best...!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(I think I'm a little calmer than last
year.
But, as expected I'm nervous still.)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoicePlay("P530500001_05_060");
    MsgDisp("Hiiragi","It appears that gaming music is popular,
yes?");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
Thank you for coming.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P530500001_05_070");
    MsgDisp("Hiiragi","I'm relieved.
That's a nice expression.");
    MsgDisp("主人公","Eh?
Is that right...");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P530500001_05_080");
    MsgDisp("Hiiragi","Yes.
A moderate elation——In other words, your
heart is racing.");
    MsgDisp("主人公","Yeah, my heart is racing.");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P530500001_05_090");
    MsgDisp("Hiiragi","If you're too nervous, you won't be able
to use your full potential. But on the
other hand, excitement can lead to
unexpected results.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P530500001_05_100");
    MsgDisp("Hiiragi","Your expression right now gives you a good
feeling about that, doesn't it?");
    MsgDisp("主人公","...Yes.
｛柊＊＊＊｝ told me that, so
I'm starting to think so too!");
    ChEye(5,0);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("P530500001_05_110");
    MsgDisp("Hiiragi","I see.
All that's left is to believe in yourself.");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","Thank you.
Then, I'm off!");
    MsgDisp("主人公","(Alright.
Believing in myself, I'll do my best!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGOpen("sc725",0);
ScrFadeIn(0);
