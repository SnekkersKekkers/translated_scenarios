BGOpen("ar100",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    MsgDisp("主人公","Welcome.");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,35,0,0,3,#1,#1,0,0);
    VoicePlay("I350100000_01_000");
    MsgDisp("Kazama","Wow, looking good.");
    MsgDisp("主人公","Ah, what's up, ｛風真＊＊｝?");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("I350100000_01_010");
    MsgDisp("Kazama","I'm in the middle of a shift
at Simon's, too. The manager asked me
to get a cake for a customer.");
    MsgDisp("主人公","So, you want takeout.
Order received.");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,4);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    ChMotion(1,0);
    MsgDisp("主人公","Thank you for your patience.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I350100000_01_020");
    MsgDisp("Kazama","You've got good sense.
Thank you.
See you later.");
    MsgDisp("主人公","Yeah, see you, ｛風真＊＊｝.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    SEWait();
    SEPlay("EV_SE_DOOR_014");
    MsgDisp("主人公","(Hm? Come to think of it, there's a cake
shop near Simon's......)");
    break ;
    case 3:
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    MsgDisp("主人公","Welcome.
Ah, ｛風真＊＊｝, what's up?");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,35,0,0,3,#1,#1,0,0);
    VoicePlay("I350100000_01_030");
    MsgDisp("Kazama","What, am I not allowed here?
I was just thinking of having
a cup of coffee.");
    MsgDisp("主人公","Hehe, I see.
Then, please have a seat here.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    SEWait();
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    SEPlay("EV_SE_001",0,0.5);
    SEWait();
    MsgDisp("主人公","Here's our original blend.");
    VoicePlay("I350100000_01_040");
    MsgDisp("Kazama","Smells good.
......Yeah, it's delicious.");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(1,35,0,0,3,#1,#1,0,0,0,30);
    ChEye(1,2);
    VoicePlay("I350100000_01_050");
    MsgDisp("Kazama","It's too bad, but time's up.
It's time for me to go.");
    MsgDisp("主人公","Huh∈　Already∋");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,4);
    VoicePlay("I350100000_01_060");
    MsgDisp("Kazama","I'm actually on break right now.
I was free, so I came to take a peek.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    Wait(60,1);
    VoicePlay("I350100000_01_070");
    MsgDisp("Kazama","That outfit is nice.
It was worth the trip coming here.");
    MsgDisp("主人公","Hehe, thanks.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I350100000_01_080");
    MsgDisp("Kazama","Next time, I'll take my time
sipping the coffee.
See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1,0,30);
    SEWait();
    SEPlay("EV_SE_DOOR_014");
    MsgDisp("主人公","(｛風真＊＊｝ came all this way
to check on me.
I'm so happy!)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_649");
    SEWait();
    SEPlay("EV_SE_650");
    SEStop("EV_SE_649");
    SEWait();
    MsgDisp("主人公","Yes, this is Cafe Alucard.");
    VoicePlay("I350100000_01_090");
    MsgDisp("Kazama?","Hello.");
    MsgDisp("主人公","Hm?
Is that you, ｛風真＊＊｝?");
    VoicePlay("I350100000_01_100");
    MsgDisp("Kazama","Correct.
There would've been a penalty
for getting it wrong, you know.");
    MsgDisp("主人公","Hehe.
What is it all of a sudden?");
    VoicePlay("I350100000_01_110");
    MsgDisp("Kazama","I'd like some cake for takeout.
Someone will come pick it up later.");
    MsgDisp("主人公","Okay, got it.
Thank you for your order.");
    MsgClose();
    ScrFadeOut(0);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    ScrFadeIn(0);
    MsgClose();
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
    Wait(75,0);
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,35,0,0,3,#1,#1,0,0);
    MsgDisp("主人公","Welcome.
......Hm, ｛風真＊＊｝?
You said someone else would......");
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3,1);
    VoicePlay("I350100000_01_120");
    MsgDisp("Kazama","Yeah, I just became free at
a good time.
I came myself.");
    MsgDisp("主人公","I see.
Then would you like some coffee?");
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("I350100000_01_130");
    MsgDisp("Kazama","Uh......
If it's just a little...... no, I can't.");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("I350100000_01_140");
    MsgDisp("Kazama","I have a customer waiting.
I'll need to go back.");
    MsgDisp("主人公","Really?
You said you were free......");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,4);
    VoicePlay("I350100000_01_150");
    MsgDisp("Kazama","Ah, aah. It was just for a moment?");
    MsgDisp("主人公","Huh, one moment?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I350100000_01_160");
    MsgDisp("Kazama","See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    SEWait();
    SEPlay("EV_SE_DOOR_014");
    MsgDisp("主人公","......Wait, ｛風真＊＊｝,
you forgot the cake!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
SEStop("EV_SE_DOOR_014",1);
BGMStop();
MsgClose();
ScrFadeOut(0,0);
