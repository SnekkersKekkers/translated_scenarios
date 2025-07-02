BGOpen("sc740",0);
BGMStop();
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","(I'm a little nervous.
Can I even do it properly....)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,0,-1,-1,0,0,0,60);
    VoicePlay("P530400000_04_000");
    MsgDisp("Nanatsumori","Yo.");
    MsgDisp("主人公","Ah,｛七ツ森＊｝...");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("P530400000_04_010");
    MsgDisp("Nanatsumori","What's this.
Your expression is seriously stiff.");
    MsgDisp("主人公","My heart is racing a little...");
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("P530400000_04_020");
    MsgDisp("Nanatsumori","I see...");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P530400000_04_030");
    MsgDisp("Nanatsumori","How about I draw the character 
for 'person' in your palm?
You play a large instrument, right?");
    MsgDisp("主人公","Eh...
Ahaha, are you casting a 
good luck spell?");
    ChEye(4,1);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("P530400000_04_040");
    MsgDisp("Nanatsumori","Right.
It seems to be extremely 
effective according to some people～?");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P530400000_04_050");
    MsgDisp("Nanatsumori","Are you already feeling calm?");
    MsgDisp("主人公","Ah... yes!
I'm off now!");
    VoicePlay("P530400000_04_060");
    MsgDisp("Nanatsumori","Yeah.");
    MsgDisp("主人公","(Before I knew it, my stress was coming
off... ｛七ツ森＊｝, Thank you! Alr-ight!
let's give it our best!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(I'm a little nervous.
Can I even do it properly....)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,2,3,-1,-1,0,0,0,60);
    VoicePlay("P530400000_04_070");
    MsgDisp("Nanatsumori","Whats this.
Stressed?");
    MsgDisp("主人公","Ah,｛七ツ森＊｝...yeah.");
    ChMotion(4,1,1);
    VoicePlay("P530400000_04_080");
    MsgDisp("Nanatsumori","So it's like that, I see.");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("P530400000_04_090");
    MsgDisp("Nanatsumori","Showcasing your craft in front of a 
huge audience, on a large stage 
is difficuld. ");
    ChEye(4,4);
    ChMouth(4,4);
    VoicePlay("P530400000_04_100");
    MsgDisp("Nanatsumori","Though, from the bottom of their hearts,
the audience is looking forwards to your
performance. Of course, I am too.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P530400000_04_110");
    MsgDisp("Nanatsumori","Don't worry about making mistakes, 
just enjoy the music to the fullest.");
    MsgDisp("主人公","Enjoy the music...");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("P530400000_04_120");
    MsgDisp("Nanatsumori","Right, right.
...hey, you're getting excited,
aren't you?");
    MsgDisp("主人公","Hehe!");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("P530400000_04_130");
    MsgDisp("Nanatsumori","ＧＯ!
Have fun to the fullest!");
    MsgDisp("主人公","Yeah!");
    MsgDisp("主人公","(｛七ツ森＊｝, thank you for encouraging
me! Alright, let's do our best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
