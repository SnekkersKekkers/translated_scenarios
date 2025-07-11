ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(7,254,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("N020700000_07_000");
    MsgDisp("Mikage","｛主人公｝.
Top of the grade.");
    MsgDisp("主人公","Yes, I did my best!");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("N020700000_07_010");
    MsgDisp("Mikage","Well done, you did great.");
    MsgDisp("主人公","(Hehe, ｛御影＊＊｝ praised me.
I did it!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    case 3:
    MsgClose();
    ChOpen(7,254,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("N020700000_07_020");
    MsgDisp("Mikage","｛主人公｝, you're in first place.");
    MsgDisp("主人公","Yes, I did my best!");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("N020700000_07_030");
    MsgDisp("Mikage","Well done.
Thanks to you, I'm in a great mood too.");
    MsgDisp("主人公","｛御影＊＊｝, it makes me happy that you
feel that way.");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("N020700000_07_040");
    MsgDisp("Mikage","Hey, being too good of a student can have
it's downsides too. Don't push yourself
too hard.");
    MsgDisp("主人公","(｛御影＊＊｝ praised me!
I'll do my best next time too.)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(7,254,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("N020700000_07_050");
    MsgDisp("Mikage","｛主人公｝, look where you're on the list.
Very cool of you.");
    MsgDisp("主人公","Yes, I did my best!");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("N020700000_07_060");
    MsgDisp("Mikage","As expected from the serious girl in the
class.");
    MsgDisp("主人公","Hehe, thank you very much.");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("N020700000_07_070");
    MsgDisp("Mikage","Hey... I mean, you're smart enough that
you probably know this, but it's also
important to enjoy yourself during your
high school years.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("N020700000_07_080");
    MsgDisp("Mikage","Don't work yourself too hard.
Try getting the top rank while taking it
ea～sy next time.");
    MsgDisp("主人公","Huh?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("N020700000_07_090");
    MsgDisp("Mikage","You can do it.");
    MsgDisp("主人公","(I'm glad ｛御影＊＊｝ cares that much
about me...
I'll do my best.)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
