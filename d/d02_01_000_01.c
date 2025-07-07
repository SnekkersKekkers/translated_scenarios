BGOpen("ho000",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_C01_RYOUTA_A",0.01);
ChOpen(1,254,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Oh?
｛風真＊＊｝, good morning!
Were you maybe waiting for me?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D020100000_01_000");
MsgDisp("Kazama","Waiting or not, we're going the same
way, aren't we?");
MsgDisp("主人公","That's true.
It really feels like we're back in
elementary school again.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D020100000_01_010");
MsgDisp("Kazama","I guess so. When I look at you, I don't 
notice anything different. It's like
you haven't grown at all.");
MsgDisp("主人公","｛風真＊＊｝, you've changed a lot though,
haven't you?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,4);
VoicePlay("D020100000_01_020");
MsgDisp("Kazama","......Have I?");
MsgDisp("主人公","You've gotten so much——");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("D020100000_01_030");
MsgDisp("Kazama","\"You've gotten so much taller, haven't
you\"?");
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("D020100000_01_040");
MsgDisp("Kazama","Of course I have!
Compared to how I was a few years ago.");
MsgDisp("主人公","Ugh......");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D020100000_01_050");
MsgDisp("Kazama","Yes, yes, everything's fine.
It's just business as usual for you
again today. Let's go.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(1);
MsgDisp("主人公","Geez, what do you mean by that?");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE",0,0.5);
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex240",0);
NSSOpen(1,254,0,0,-1,-1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("D020100000_01_121");
MsgDisp("Kazama","Looks like it's going well......
The wish I made to the pinwheel.");
MsgDisp("主人公","I see.
If ｛風真＊＊｝ thinks so, maybe so.");
NSSEye(1,3);
NSSMouth(1,2);
NSSMouthOpenLevel(1,0);
VoicePlay("D020100000_01_130");
MsgDisp("Kazama","Hm?");
MsgDisp("主人公","｛風真＊＊｝'s wish is also my wish,
so......");
NSSEye(1,6);
NSSMouth(1,3);
NSSCheek(1,7);
VoicePlay("D020100000_01_140");
MsgDisp("Kazama","I-I see.
You're definitely doing well.
I just got over my jet lag so next——");
MsgClose();
ScrFadeOut(0,0,30);
NSSClose();
SEStop("EV_SE_754",0.01);
SEPlay("EV_SE_636",0,0.9);
SEWait();
MsgDisp("主人公","Kyaa∈
There's a puddle here......");
BGOpen("sc100",0);
MsgClose();
ChOpen(1,254,0,3,3,-1,-1,0,0);
ScrFadeIn(0);
ChMotion(1,3);
VoicePlay("D020100000_01_150");
MsgDisp("Kazama","Hahaha!
A bubbly and clumsy person.
That's good. You're too funny.");
MsgDisp("主人公","Geez......");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(1,0,30);
ChLayout(0);
MsgClose();
ChOpen(1,254,0,0,3,-1,-1,0,0,0,30);
ChMotion(1,3);
VoicePlay("D020100000_01_160");
MsgDisp("Kazama","Come, give me your hand.
If you stand there for too long, you'll
get water in your shoes.");
MsgDisp("主人公","Right.
Thank you.");
SEPlay("EV_SE_504",0,0.5);
SEWait();
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D020100000_01_170");
MsgDisp("Kazama","Ah, maybe you should just take off your
shoes and let me carry you until
we get to the shoe lockers.");
MsgDisp("Kazama","Here, piggyback ride.");
MsgDisp("主人公","W-Wait, ｛風真＊＊｝∋
I said I'm fine so......
Hey, everyone is staring at us∋");
SEPlay("EV_SE_857",0.7,0.3);
SEPlay("EV_SE_515",0.2,0.4);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("D020100000_44_000");
MsgDisp("School Girl A","Hey, isn't that Kazama-kun?
I wonder what he's doing?");
SEStop("EV_SE_857",2);
VoicePlay("D020100000_45_000");
MsgDisp("School Girl B","Who is that girl with him?");
ChMouth(1,3);
VoicePlay("D020100000_44_010");
MsgDisp("School Girl A","I'm not sure.
But they look really close.");
SEPlay("EV_SE_857",0.7,0.3);
SEPlay("EV_SE_515",0.2,0.4);
Wait(50,0);
SEStop("EV_SE_857",2);
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(10,0);
VoicePlay("D020100000_01_180");
MsgDisp("Kazama","Whatever.
I don't care at all if they stare.");
ChEyeOpenLevel(1,-1);
MsgDisp("主人公","It bothers me!");
SEStop("EV_SE_515",1);
ChEye(1,3);
ChMouth(1,2);
Wait(60,1);
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(1,-1);
ChCheek(1,0);
