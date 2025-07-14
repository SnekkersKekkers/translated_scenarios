BGOpen("sc623",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("H180600000_06_000");
    MsgDisp("Himuro","Hello.");
    MsgDisp("主人公","｛氷室＊＊｝! You came to cheer us on?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H180600000_06_010");
    MsgDisp("Himuro","I didn't really have other plans.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H180600000_06_020");
    MsgDisp("Himuro","Besides, you'll be showing me a pretty
interesting match, won't you?");
    MsgDisp("主人公","Yeah, we're going to win!");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("H180600000_06_030");
    MsgDisp("Himuro","You said it.
I'll look forward to it.");
    MsgDisp("主人公","(Alright, let's do our best!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("H180600000_06_040");
    MsgDisp("Himuro","It's finally time.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝! Did you come to cheer us
on?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,5);
    VoicePlay("H180600000_06_050");
    MsgDisp("Himuro","Pretty much.
It's the Koshien, after all.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("H180600000_06_060");
    MsgDisp("Himuro","I was getting a little excited, thinking
about how our team might win thanks to
your hard work.");
    MsgDisp("主人公","Y-Yeah......");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChCheek(6,0);
    VoicePlay("H180600000_06_070");
    MsgDisp("Himuro","You're starting to feel the pressure now?
You've already come this far, so just keep
aiming for the top.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("H180600000_06_080");
    MsgDisp("Himuro","Well, I'm sure you guys will be fine,
though.");
    MsgDisp("主人公","(Alright, let's do our best......!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(6);
