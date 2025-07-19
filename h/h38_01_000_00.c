ChLayout(1);
MsgClose();
ScrFadeIn(0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ChOpen(1,254,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(1);
    VoicePlay("H380100000_01_000");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("H380100000_01_010");
    MsgDisp("Kazama","Looks like you're all fired up?");
    MsgDisp("主人公","Yeah, I want to win no matter what.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H380100000_01_020");
    MsgDisp("Kazama","Haha, you'll be fine.
If it's you, you'll win it all in just a
single point!");
    MsgDisp("主人公","(Alright!
Let's do our best, to show off to
｛風真＊＊｝ too!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(1);
    VoicePlay("H380100000_01_030");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
Did you come to cheer me on?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H380100000_01_040");
    MsgDisp("Kazama","I was so worried that I couldn't sit
still.
Listen, don't do anything rash.");
    MsgDisp("主人公","Yeah, I'll definitely win, so just watch
me!");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,4);
    VoicePlay("H380100000_01_050");
    MsgDisp("Kazama","...Geez, are you even listening to what
I'm saying?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H380100000_01_060");
    MsgDisp("Kazama","I'll be watching.
So, make sure you won't have any regrets.");
    MsgDisp("主人公","Yeah.
It's reassuring just having you here,
｛風真＊＊｝.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("H380100000_01_070");
    MsgDisp("Kazama","Don't worry.
I'll pick up you later with the best
reaction.");
    MsgDisp("主人公","(Alright.
Let's do our best, for ｛風真＊＊｝ too!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
