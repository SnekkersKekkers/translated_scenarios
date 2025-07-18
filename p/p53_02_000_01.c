BGMStop();
BGOpen("sc740",0);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","(This year we're doing gaming music.
Is that why it's so popular?
There's a huge audience...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("P530200001_02_000");
    MsgDisp("Sassa","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
You came?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("P530200001_02_010");
    MsgDisp("Sassa","Game music seems somewhat fun.");
    MsgDisp("主人公","Y-Yeah.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,0);
    VoicePlay("P530200001_02_020");
    MsgDisp("Sassa","Huh?
You have to enjoy playing it, no?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("P530200001_02_030");
    MsgDisp("Sassa","Hey if you make that troubled face, it
doesn't seem like an fun game, does it?");
    MsgDisp("主人公","Yeah...");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("P530200001_02_040");
    MsgDisp("Sassa","What was it called again?
A boring game...a shit game...");
    MsgDisp("主人公","Eh?
Hey, you can't say that kind of stuff!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P530200001_02_050");
    MsgDisp("Sassa","Ah, sorry, sorry.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    VoicePlay("P530200001_02_060");
    MsgDisp("Sassa","Then, please play as if you're playing a
fun game!");
    MsgDisp("主人公","Hehe, I got it!");
    MsgDisp("主人公","(Yeah, it's just as ｛颯砂＊＊｝
says.
Games have to be fun!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(This year we're doing gaming music.
Is that why it's so popular?
There's a huge audience...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("P530200001_02_070");
    MsgDisp("Sassa","｛主人公｝, I came to listen to
some gaming music.");
    MsgDisp("主人公","｛颯砂＊＊｝.
Thank you.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("P530200001_02_080");
    MsgDisp("Sassa","Guess it's a popular game?
Even I know it.");
    MsgDisp("主人公","Yeah.
That's why the audience is filled up.
I can't be nervous...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("P530200001_02_090");
    MsgDisp("Sassa","That's nice.
It's definitely better that people are
here.");
    MsgDisp("主人公","That's right, but...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P530200001_02_100");
    MsgDisp("Sassa","In order for these people to listen and
enjoy your music, you've been giving it
your all, right?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("P530200001_02_110");
    MsgDisp("Sassa","That's what makes it different to when I
compete.
I do it to set my own records.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("P530200001_02_120");
    MsgDisp("Sassa","Your performance is meaningless if many
people don't listen to it, right?");
    MsgDisp("主人公","Yeah...that's right, huh.
Thank you, ｛颯砂＊＊｝!");
    MsgDisp("主人公","(Yeah, it's just as ｛颯砂＊＊｝
says. For the many people who want to hear
it, I have to give it my all!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
