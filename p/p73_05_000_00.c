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
    MsgDisp("主人公","(I finished just in time but, it's finally
the runway...
I'm nervous..)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoicePlay("P730500000_05_000");
    MsgDisp("Hiiragi","Good day.");
    MsgDisp("主人公","｛柊＊＊＊｝!");
    VoicePlay("P730500000_05_010");
    MsgDisp("Hiiragi","I came t support you.");
    MsgDisp("主人公","Y-Yeah.
Thank you.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0,1);
    VoicePlay("P730500000_05_020");
    MsgDisp("Hiiragi","Even if I tell you to relax, it's
difficult, right?");
    MsgDisp("主人公","I'm super nervous..
This is my first time doing something like
a fashion show.");
    VoicePlay("P730500000_05_030");
    MsgDisp("Hiiragi","I understand.
I'm also always like that.");
    MsgDisp("主人公","Eh, even ｛柊＊＊＊｝?");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P730500000_05_040");
    MsgDisp("Hiiragi","That's how I feel everytime I do something
for the first time. So, I've resigned
myself to the fact nervousness is
inevitable. If I do that, it becomes a
little easier, right?");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","Ah, it's starting.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoiceEVSPlay(5);
    VoicePlay("P730500000_05_050");
    MsgDisp("Hiiragi","｛主人公｝.
I forgot to mention something important.
That outfit suits you very well.");
    MsgDisp("主人公","Thank you...!");
    MsgDisp("主人公","(I feel like ｛柊＊＊＊｝ gave me the push
I needed.
Let's do our best!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(I finished just in time but, it's finally
the runway...
I'm nervous..)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("P730500000_05_060");
    MsgDisp("Hiiragi","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
Did you come to watch?");
    ChEye(5,4);
    VoicePlay("P730500000_05_070");
    MsgDisp("Hiiragi","This is your big moment.
I couldn't miss it.");
    MsgDisp("主人公","Big moment huh...
Seems like I'm nervous after all.");
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    ChEyeOpenLevel(5,0);
    VoicePlay("P730500000_05_080");
    MsgDisp("Hiiragi","I apologize.
I didn't intend on putting pressure on
you.");
    MsgDisp("主人公","No.
I'm happy that you came to watch.");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P730500000_05_090");
    MsgDisp("Hiiragi","It's the same when I'm at theatre troupe.
I'm happiest when people come to watch.");
    VoicePlay("P730500000_05_100");
    MsgDisp("Hiiragi","Just remember that happy feeling, an
forget your apprehension, okay?");
    MsgDisp("主人公","...Yeah.");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","Ah, it's starting.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0,1);
    VoicePlay("P730500000_05_110");
    MsgDisp("Hiiragi","It'll be alright. If it's you, you'll be
able to charm the audience. I am current
proof of that.");
    MsgDisp("主人公","(Thank you, ｛柊＊＊＊｝. Yes, I should go
out with a little confidence. Let's do our
best!)");
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
