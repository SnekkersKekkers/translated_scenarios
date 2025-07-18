ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    ScrFadeIn(0);
    ChOpen(1,254,0,0,0,#1,#1,0,0);
    VoicePlay("H180100000_01_000");
    MsgDisp("Kazama","Yo.
You're working pretty hard.");
    MsgDisp("主人公","｛風真＊＊｝, did you come to
cheer us on?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H180100000_01_010");
    MsgDisp("Kazama","I came to watch you win.");
    MsgDisp("主人公","Huh, me?");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("H180100000_01_020");
    MsgDisp("Kazama","You're part of the team too, aren't you?");
    MsgDisp("主人公","Ah...yeah!");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H180100000_01_030");
    MsgDisp("Kazama","Look, everyone's waiting for you.
Go on.");
    MsgDisp("主人公","(Alright.
Let's aim for the championship together!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H180100000_01_040");
    MsgDisp("Kazama","It's amazing, winning enough to make it
this far.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
You came?");
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("H180100000_01_050");
    MsgDisp("Kazama","Yeah, you brought me all the way to the
Koshien.");
    MsgDisp("主人公","It wasn't just me, but the whole team
brought you here, you know?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H180100000_01_060");
    MsgDisp("Kazama","No, I wouldn't have come if it weren't for
you.");
    MsgDisp("主人公","Hehe, so that's how it is.");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("H180100000_01_070");
    MsgDisp("Kazama","Isn't it the same for the team?
Without you, I don't think they would've
been able to make it this far.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H180100000_01_080");
    MsgDisp("Kazama","It's thanks to your hard work that the
baseball team has been this successful.
That's a fact.");
    MsgDisp("主人公","Thank you, ｛風真＊＊｝.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("H180100000_01_090");
    MsgDisp("Kazama","So, I need you to get a result you're
happy with.");
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("H180100000_01_100");
    MsgDisp("Kazama","Since you cut down on our precious time
together for this...");
    MsgDisp("主人公","Huh?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("H180100000_01_110");
    MsgDisp("Kazama","I'm just saying you have to win.
Got it?");
    MsgDisp("主人公","Yeah!");
    MsgDisp("主人公","(Alright.
Let's get a win in front of
｛風真＊＊｝! )");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
