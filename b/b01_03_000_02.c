BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like I got here a little early...
Huh?)");
BGMPlay("BGM_C03_HONDA_A",0.01);
MsgClose();
ChOpen(3,253,0,0,0,#1,#1,0,0);
MsgDisp("主人公","｛本多＊＊｝!
Did I have the wrong time?");
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChSet(3,0,1);
    VoicePlay("B010300002_03_000");
    MsgDisp("Honda","Looks like I'm the one who got it wrong.
You're here so early.");
    MsgDisp("主人公","I see.
I was surprised because I thought I was
running late.");
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B010300002_03_010");
    MsgDisp("Honda","Isn't that good? Feelings of surprise like
that are rare to come by. It accentuates
it.");
    MsgDispSksp(0);
    break ;
    case 3:
    ChSet(3,0);
    VoicePlay("B010300002_03_020");
    MsgDisp("Honda","Nope.
You're right on time.");
    MsgDisp("主人公","Then you arrived early?");
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B010300002_03_030");
    MsgDisp("Honda","Yeah, though I wonder why. As I was
thinking about you, I started walking
faster. Weird, huh?");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("B010300002_03_040");
    MsgDisp("Honda","Why?
You don't have the wrong time.");
    MsgDisp("主人公","Oh, then you arrived early.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B010300002_03_050");
    MsgDisp("Honda","Yup yup. Actually, I couldn't wait to tell
you this dream I had this morning, so I
ended up here early.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("B010300002_03_060");
    MsgDisp("Honda","But then, as I got here early, I realized
there was no point in being the only one
here already.");
    MsgDisp("主人公","Hehe.
What kind of dream was it?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B010300002_03_070");
    MsgDisp("Honda","I forgot after I saw you.
The real you is more important than my
dreams.");
    MsgDispSksp(1,0);
    MsgDisp("主人公","(｛本多＊＊｝...)");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
