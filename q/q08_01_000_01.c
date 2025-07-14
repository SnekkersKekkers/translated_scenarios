BGMStop();
BGOpen("sc810",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    ScrFadeIn(0);
    MsgDisp("主人公","It was fun.
It was such a nice place.");
    VoicePlay("Q080100001_01_000");
    MsgDisp("Kazama","Yes, it was.
And even your reaction was a ten out of
ten.");
    MsgDisp("主人公","Hehe, thanks.");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("Q080100001_01_010");
    MsgDisp("Kazama","Thank me not yet.
You have one more free day left, right?");
    MsgDisp("主人公","Yes.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("Q080100001_01_020");
    MsgDisp("Kazama","This time from me......
Let's go the next one together too.");
    MsgDisp("主人公","Yeah, let's go!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("Q080100001_01_030");
    MsgDisp("Kazama","Thank you.
See you back here.
Looking forward to it.");
    break ;
    case 3:
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0,1);
    ScrFadeIn(0);
    MsgDisp("主人公","That was a lot of fun.");
    VoicePlay("Q080100001_01_040");
    MsgDisp("Kazama","Yeah.
Especially since I'm with you.");
    MsgDisp("主人公","Yeah, I guess so?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("Q080100001_01_050");
    MsgDisp("Kazama","Come on, don't get carried away.");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("Q080100001_01_060");
    MsgDisp("Kazama","But really thank you.
For inviting me.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("Q080100001_01_070");
    MsgDisp("Kazama","So this time from me to you......
Wanna spend the next one together too?");
    MsgDisp("主人公","Yes, of course!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("Q080100001_01_080");
    MsgDisp("Kazama","Alright, we're going for a even better
day! You've got to be ready for it. See
you back here.");
    break ;
    case 4:
    case 5:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ScrFadeIn(0);
    MsgDisp("主人公","Nagasaki is a nice place.
I had a lot of fun.");
    ChMotion(1,3);
    VoicePlay("Q080100001_01_090");
    MsgDisp("Kazama","Yeah.
It's thanks to you inviting me.");
    MsgDisp("主人公","Hehe, yeah.
I'm happy I asked you, ｛風真＊＊｝.");
    ChEye(1,0);
    ChMouth(1,4);
    ChMotion(1,0);
    VoiceEVSPlay(1);
    VoicePlay("Q080100001_01_100");
    MsgDisp("Kazama","｛主人公｝, this time from me to you.");
    MsgDisp("主人公","Eh?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("Q080100001_01_110");
    MsgDisp("Kazama","Wanna spend the next free period
together...?");
    MsgDisp("主人公","Sure......!
I'm so happy.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("Q080100001_01_120");
    MsgDisp("Kazama","Yeah. School trips are so much fun, aren't
they? We don't have this kind of thing in
the UK.");
    MsgDisp("主人公","Oh yeah, It's the first time for you,
｛風真＊＊｝.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("Q080100001_01_130");
    MsgDisp("Kazama","Yes, and it would be meaningless without
you. Right?");
    MsgDisp("主人公","...... Maybe, yeah.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChCheek(1,0);
    VoicePlay("Q080100001_01_140");
    MsgDisp("Kazama","Okay then, tomorrow.
I'll be waiting here.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
