BGOpen("ar600",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,255,0,0,0,#1,#1,0,0);
    VoicePlay("I250100000_01_000");
    MsgDisp("Kazama","Yo.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I250100000_01_010");
    MsgDisp("Kazama","You mean welcome.
Right?");
    MsgDisp("主人公","Right, welcome!
Are you looking for something?");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("I250100000_01_020");
    MsgDisp("Kazama","Yeah.
Do you have any magazines on
fly fishing?");
    MsgDisp("主人公","Yes, they're over here.");
    SEPlay("EV_SE_856",0,0.5);
    ChClose(1);
    SEWait();
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    ChOpen(1,255,2,4,2,#1,#1,0,0);
    MsgDisp("主人公","It's around here, I believe?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I250100000_01_030");
    MsgDisp("Kazama","......You don't have what I was
looking for. But, you did your job
properly. Thanks.");
    MsgDisp("主人公","Hehe, you're welcome.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I250100000_01_040");
    MsgDisp("Kazama","I'll be back to see you
in that apron.
See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(Should I ask the manager to
expand our section on fly fishing
magazines?)");
    break ;
    case 3:
    VoicePlay("I250100000_01_050");
    MsgDisp("Kazama?","Excuse me, miss.");
    MsgDisp("主人公","Yes.");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,255,0,0,3,#1,#1,0,0);
    VoicePlay("I250100000_01_060");
    MsgDisp("Kazama","Good response.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.
Did you come to check on me?");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("I250100000_01_070");
    MsgDisp("Kazama","I came to look at fly fishing
magazines.
You're the bonus.");
    MsgDisp("主人公","Geez, I understand.
Then, I'll show you there.");
    ChClose(1);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    ChOpen(1,255,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","Sorry......
It seems that they're sold out.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,4);
    VoicePlay("I250100000_01_080");
    MsgDisp("Kazama","I thought it was a pretty
minor hobby, so I'm good just knowing
there are others out there.");
    ChMotion(1,0);
    MsgDisp("主人公","We offer a home delivery
service with a subscription.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I250100000_01_090");
    MsgDisp("Kazama","Then I wouldn't be able to see
my bonus, right?
So, I'll come again.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(Hehe, looks like ｛風真＊＊｝
is going to come check on me again.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","I have to stock today's magazines.
Everything in this box, huh......
There...... ugh, heavy.");
    VoicePlay("I250100000_01_100");
    MsgDisp("Kazama?","Are you okay?");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,255,0,4,2,#1,#1,0,0);
    VoicePlay("I250100000_01_110");
    MsgDisp("Kazama","Hey, how far are you taking this?
I'll help.");
    MsgDisp("主人公","Really?　Thanks.
It's for the hobby magazine corner.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    SEWait();
    SEPlay("EV_SE_866");
    SEWait();
    ChOpen(1,255,0,0,2,#1,#1,0,0);
    VoicePlay("I250100000_01_120");
    MsgDisp("Kazama","Is here okay?");
    MsgDisp("主人公","Yeah.
Haa...... thanks, ｛風真＊＊｝.
You saved me.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I250100000_01_130");
    MsgDisp("Kazama","Me, too.");
    MsgDisp("主人公","Hm?");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("I250100000_01_140");
    MsgDisp("Kazama","I was looking for this fishing
magazine on the top here.");
    MsgDisp("主人公","I'm glad.
You got it right as it was brought in.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I250100000_01_150");
    MsgDisp("Kazama","I got to buy my magazine, and
see you in your apron.
I'm glad I came today.");
    MsgDisp("主人公","Hehe, then I'll be counting
on your help again next time.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I250100000_01_160");
    MsgDisp("Kazama","Hey, don't get carried away.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(For the next time ｛風真＊＊｝
comes, let's stock a lot of
fishing magazines.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
