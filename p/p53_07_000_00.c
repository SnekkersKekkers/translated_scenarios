BGMStop();
BGOpen("sc740",0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","(It starts in just a little bit...
What should I do, I'm so nervous...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoicePlay("P530700000_07_000");
    MsgDisp("Mikage","You're frozen stiff, aren't you?");
    MsgDisp("主人公","Ah, ｛御影＊＊｝...");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("P530700000_07_010");
    MsgDisp("Mikage","If you're that anxious,
you won't be able to enjoy yourself,
you know?");
    MsgDisp("主人公","But...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("P530700000_07_020");
    MsgDisp("Mikage","Well, 
you might as well do nothing.");
    MsgDisp("主人公","Ehhh∋
I can't do that.");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P530700000_07_030");
    MsgDisp("Mikage","That's right, the biggest blunder would be
to do nothing. If you do something, the
worst thing would already be averted.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("P530700000_07_040");
    MsgDisp("Mikage","So, daringly do something.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("P530700000_07_050");
    MsgDisp("Mikage","Then, go.");
    MsgDisp("主人公","(Yeah, it's just as ｛御影＊＊｝ says. 
I'll do what I can...!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(It starts in just a little bit...
What should I do, I'm so nervous...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoicePlay("P530700000_07_060");
    MsgDisp("Mikage","What's this, what's this, 
I can't watch this.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("P530700000_07_070");
    MsgDisp("Mikage","You like wind instruments, don't you?
Why are you making that face
when doing something you like?");
    MsgDisp("主人公","But, I'm thinking about what if I fail...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("P530700000_07_080");
    MsgDisp("Mikage","Fail? If you ask me, Continuing this club
with your friends and standing on this
stage is already a success.");
    MsgDisp("主人公","But, If I make a mistake, 
I'll just be a nuisance to everyone.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P530700000_07_090");
    MsgDisp("Mikage","Hey. Would the other members of the club
think your mistake was a nuisance? They
wouldn't right?");
    MsgDisp("主人公","Y-Yeah.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("P530700000_07_100");
    MsgDisp("Mikage","Right?
You've come this far with good friends, 
it's already a success.");
    MsgDisp("主人公","｛御影＊＊｝...");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P530700000_07_110");
    MsgDisp("Mikage","All that's left is for you to be
satisfied with yourself.
Come on, go enjoy it");
    MsgDisp("主人公","(Yeah, it's just as ｛御影＊＊｝ says.
Let's go enjoy it!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChClose(7,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
