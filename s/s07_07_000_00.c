BGOpen("ex020",0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("S070700000_07_000");
    MsgDisp("Mikage","The atmosphere here is really nice.
It feels like New Years.");
    MsgDisp("主人公","Yeah.
I feel so nervous.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("S070700000_07_010");
    MsgDisp("Mikage","As expected of a serious girl.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("S070700000_07_020");
    MsgDisp("Mikage","Me too.
Every year I say to myself, \"I'll try my
best this year!\"");
    MsgDisp("主人公","Hehe, really?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S070700000_07_030");
    MsgDisp("Mikage","Oh, if you don't line up quickly, you
won't be able to leave until the morning!
Come, let's go.");
    MsgDisp("主人公","Oh, yeah.");
    break ;
    case 3:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S070700000_07_040");
    MsgDisp("Mikage","Somehow the air smells really clean～");
    MsgDisp("主人公","You're right.
It feels different from usual.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("S070700000_07_050");
    MsgDisp("Mikage","I guess everyone is hopeful today.");
    MsgDisp("主人公","Is ｛御影＊＊｝ hopeful?");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("S070700000_07_060");
    MsgDisp("Mikage","I guess so.
\"This year for sure!\" will work until
early January or so?");
    MsgDisp("主人公","Hehe, and what happens after that?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S070700000_07_070");
    MsgDisp("Mikage","Don't even think about that today.
......You'll spoil the fun.");
    ChEye(7,0);
    ChMouth(7,3);
    VoicePlay("S070700000_07_080");
    MsgDisp("Mikage","Come, let's go wish for a bunch of stuff.");
    MsgDisp("主人公","Hehe, yeah!");
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S070700000_07_090");
    MsgDisp("Mikage","How's it going?
Have you made a wish yet?");
    MsgDisp("主人公","Nope, not yet.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("S070700000_07_100");
    MsgDisp("Mikage","That's good. You're the type to make use
of all your time. I'm the same way.");
    MsgDisp("主人公","Hehe, really?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("S070700000_07_110");
    MsgDisp("Mikage","Yeah. I wish I had unlimited wishes.
You're usually limited to three, right?");
    MsgDisp("主人公","Hehe, I wonder what's ｛御影＊＊｝'s
wish?");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("S070700000_07_120");
    MsgDisp("Mikage","The health of everyone. Mine, my students,
the gardening club, Molly. Look, that's
already four......");
    MsgDisp("主人公","How about just wishing for the health of
everyone, instead?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S070700000_07_130");
    MsgDisp("Mikage","That's a bit cutesy, but I'll go with
that.
Come on, let's go to the hall of worship.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
