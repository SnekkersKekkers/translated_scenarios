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
NSSOpen(1,254,6,2,-1,-1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("D020100000_01_181");
MsgDisp("Kazama","Hey, do you remember what I asked you
on the day of the entrance ceremony?");
MsgDisp("主人公","Hm?");
NSSEye(1,2);
NSSMouth(1,2);
VoicePlay("D020100000_01_190");
MsgDisp("Kazama","............
You're way too carefree.");
NSSEye(1,0);
NSSMouth(1,2);
VoicePlay("D020100000_01_200");
MsgDisp("Kazama","Fine. I'll ask you again.
It's about that time in first grade,
when the two of us——");
MsgClose();
ScrFadeOut(0,0,30);
NSSClose();
SEStop("EV_SE_754",0);
SEPlay("EV_SE_636",0,0.9);
SEWait();
MsgDisp("主人公","Kyaa∈
There's a puddle here......");
BGOpen("sc100",0);
MsgClose();
ChOpen(1,254,0,3,2,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("D020100000_01_210");
MsgDisp("Kazama","…………");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,0);
VoicePlay("D020100000_01_220");
MsgDisp("Kazama","Hahaha.
Did you just do that on purpose?
......Yeah, that would make sense.");
MsgDisp("主人公","Geez.
There's no way I would just step into
a puddle on purpose......");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,4);
ChEyeOpenLevel(1,8);
VoicePlay("D020100000_01_230");
MsgDisp("Kazama","It was really the perfect interruption.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(10,0);
ChMouth(1,3);
ChEyeOpenLevel(1,-1);
VoicePlay("D020100000_01_240");
MsgDisp("Kazama","Are you okay?
Your shoes are soaking wet.
I'll dry them for you, so take them off.");
MsgDisp("主人公","It's fine.
Look, they aren't that wet.");
ChEye(1,3);
ChMouth(1,1);
ChMotion(1,3);
ChCheek(1,5);
VoicePlay("D020100000_01_250");
MsgDisp("Kazama","Oy∈
Don't just lift your legs up like that
here!");
MsgDisp("主人公","Ah, sorry.
I guess it's rude to do that......");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,7);
ChCheek(1,7);
VoicePlay("D020100000_01_260");
MsgDisp("Kazama","That's not it! You're wearing a skirt, 
so when you raise your legs like that 
you can see things∋");
MsgDisp("主人公","?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
ChCheek(1,0);
Wait(10,0);
VoicePlay("D020100000_01_270");
MsgDisp("Kazama","It's fine, I understand now. 
I underestimated how much of a natural 
airhead you are."); 
MsgDisp("Kazama","I'll have to keep my eyes on you from now
until we graduate......");
MsgDisp("主人公","(｛風真＊＊｝ reminds me of my dad......)");
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(1,-1);
ChCheek(1,0);
