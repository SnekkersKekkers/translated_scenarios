ChLayout(1);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
ChOpen(1,254,0,0,0,#1,#1,0,1,0,30);
ChOpen(2,254,3,0,4,#1,#1,0,2,0,30);
VoicePlay("Q020A00100_02_000");
MsgDisp("Sassa","Oh, here you are.
Good morning.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoiceEVSPlay(1);
VoicePlay("Q020A00100_01_000");
MsgDisp("Kazama","｛主人公｝, did you sleep
well?");
MsgDisp("主人公","Yeah, absolutely. ｛風真＊＊｝,
｛颯砂＊＊｝, are you two hanging
out together for the free period?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("Q020A00100_01_010");
MsgDisp("Kazama","Why would we?
We were waiting for you.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("Q020A00100_02_010");
MsgDisp("Sassa","Wanna walk around together?");
MsgSel("Yeah, sure!","Sorry, I......");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(1,3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("Q020A00100_02_020");
    MsgDisp("Sassa","Okay, that's settled.
The three of us will be going together.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("Q020A00100_01_020");
    MsgDisp("Kazama","Yeah.
When possible, let's remember Inori, too.");
    MsgDisp("主人公","Hehe, yeah.
It would have been a lot of fun if the
four of us could have gone together.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("Q020A00100_02_030");
    MsgDisp("Sassa","Yup.
Well, I'm sure he's content enough with
your feelings.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("Q020A00100_01_030");
    MsgDisp("Kazama","Yeah.
Well then, let's go.");
    MsgDisp("主人公","(Looks like the free period will be a lot
of fun!)");
    MsgClose();
    ScrFadeOut(0);
    MsgClose();
    ChClose(1,0,0);
    ChClose(2,0,0);
    break ;
    case 1:
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("Q020A00100_01_040");
    MsgDisp("Kazama","Seriously...?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4,1);
    VoicePlay("Q020A00100_02_040");
    MsgDisp("Sassa","Oh, that's a bummer.");
    MsgDisp("主人公","Yeah, I'm sorry.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("Q020A00100_02_050");
    MsgDisp("Sassa","Oh, don't worry.
I'll be comforting Ryota.");
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("Q020A00100_01_050");
    MsgDisp("Kazama","Shut up.");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("Q020A00100_01_060");
    MsgDisp("Kazama","You're not too familiar with this place,
so be careful, okay?");
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,0);
    ChEyeOpenLevel(2,0);
    VoicePlay("Q020A00100_02_060");
    MsgDisp("Sassa","I'm sure she knows that already, come on,
let's go.");
    MsgClose();
    SEPlay("EV_SE_856");
    ChClose(2,0,30);
    ChClose(1,0,30);
    MsgDisp("主人公","(They even invited me, now I feel a bit
bad......)");
    MsgClose();
    ScrFadeOut(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }