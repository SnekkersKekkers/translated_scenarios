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
    VoicePlay("H480600000_06_000");
    MsgDisp("Himuro","Hello.");
    MsgDisp("主人公","｛氷室＊＊｝!
Did you come to cheer me on?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H480600000_06_010");
    MsgDisp("Himuro","Rather than cheering, I came to watch.
This is uncharted territory, after all.");
    MsgDisp("主人公","Did you want to learn more about rhythmic
gymnastics?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H480600000_06_020");
    MsgDisp("Himuro","Yeah.
And I'll be cheering for you while I'm at
it.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("H480600000_06_030");
    MsgDisp("Himuro","So, do your best to entertain me.");
    MsgDisp("主人公","(Alright.
I'll show him a good performance!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("H480600000_06_040");
    MsgDisp("Himuro","Not heading up?");
    MsgDisp("主人公","Huh∋
Ah, ｛氷室＊＊｝.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H480600000_06_050");
    MsgDisp("Himuro","If you just perform as usual, the natural
result will follow, too.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H480600000_06_060");
    MsgDisp("Himuro","You've worked hard for these past three
years, after all.");
    MsgDisp("主人公","......Yeah.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChEyeOpenLevel(6,8);
    VoicePlay("H480600000_06_070");
    MsgDisp("Himuro","What a worried look on your face.
It's not like you.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H480600000_06_080");
    MsgDisp("Himuro","Have some confidence. Messing up because
you're nervous is the stupidest thing you
could do now. Don't let me down.");
    MsgDisp("主人公","...... You're right.
I'll do my best!");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("H480600000_06_090");
    MsgDisp("Himuro","That's a good expression.
I'm expecting lots.");
    MsgDisp("主人公","(Alright.
Let's do our best like usual!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(6);
