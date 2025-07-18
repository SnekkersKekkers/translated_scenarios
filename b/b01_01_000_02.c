BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like I'm a little early...
Oh, ｛風真＊＊｝ is already
here!)");
BGMPlay("BGM_C01_RYOUTA_A",0.01);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,253,0,0,0,#1,#1,0,0);
    VoicePlay("B010100002_01_000");
    MsgDisp("Kazama","Hmm?
You're early.");
    MsgDisp("主人公","So are you, ｛風真＊＊｝.");
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B010100002_01_010");
    MsgDisp("Kazama","I left home at the wrong time.
But it seems like it worked out in my
favor anyway.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgClose();
    ChOpen(1,253,0,0,0,#1,#1,0,0);
    VoicePlay("B010100002_01_020");
    MsgDisp("Kazama","Oh, aren't you early.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B010100002_01_030");
    MsgDisp("Kazama","Could it be that you were looking forward
to it so much you couldn't wait?");
    MsgDisp("主人公","Is that the case for you?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    ChCheek(1,5);
    VoicePlay("B010100002_01_040");
    MsgDisp("Kazama","Hm...
I—");
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,3);
    ChCheek(1,0);
    VoicePlay("B010100002_01_050");
    MsgDisp("Kazama","Heh, answering a question with a question.
...Ahh, you're a dangerous one.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,253,0,4,2,#1,#1,0,0);
    MsgDisp("主人公","Aren't you here early,
｛風真＊＊｝?");
    ChEye(1,0);
    ChMouth(1,4);
    ChMotion(1,1);
    VoicePlay("B010100002_01_060");
    MsgDisp("Kazama","Yep.
But so are you.");
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B010100002_01_070");
    MsgDisp("Kazama","...Why is that?");
    MsgDisp("主人公","Um...");
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChCheek(1,5);
    VoicePlay("B010100002_01_080");
    MsgDisp("Kazama","Why are you turning so red?
Well, let's just say we have the same
reason.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChCheek(1,0);
