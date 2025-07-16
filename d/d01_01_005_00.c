BGOpen("ho210",0);
ScrFadeIn(0);
MsgDisp("主人公","(......Come to think of it, the other day
on the rooftop ｛風真＊＊｝ was
on the phone with his parents......)");
MsgDisp("主人公","(It sounded like they were talking about
something serious......)");
SEPlay("EV_SE_577");
Wait(50,0);
MsgDisp("主人公","(Eh∋ it's from ｛風真＊＊｝. )");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
Wait(30,0);
MsgDisp("主人公","Hello, ｛風真＊＊｝?
That's amazing.
I was just thinking about you.");
VoicePlay("D010100500_01_000");
MsgDisp("Kazama","Yeah.
That's normal for us.");
VoicePlay("D010100500_01_010");
MsgDisp("Kazama","Hey, why don't you come over here for
lunch?");
MsgDisp("主人公","Eh?");
VoicePlay("D010100500_01_020");
MsgDisp("Kazama","There's plenty of food waiting for you.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(Eh, wait, ｛風真＊＊｝∋
...... Something amazing just happened!)");
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("bh100",0);
ChLayout(1);
MsgClose();
ChOpen(1,255,7,0,3,#1,#1,0,0);
ScrFadeIn(0);
ChEye(1,4);
ChMotion(1,3);
VoicePlay("D010100500_01_030");
MsgDisp("Kazama","Welcome.
I've been waiting for you.");
MsgDisp("主人公","That was so sudden, it surprised me.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D010100500_01_040");
MsgDisp("Kazama","But you came for the food right?
Come on in, I was just finishing up.");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlOpen("ev_01_12");
StlEye(1,0);
StlMouth(1,0);
BGMPlay("BGM_C01_RYOUTA_B",0.01);
SEPlay("EV_SE_604",1);
ScrFadeIn(0);
MsgDisp("主人公","Woah......
｛風真＊＊｝, are you actually
good at cooking?");
SEVol(0.5,0.8);
StlMouth(1,1);
VoicePlay("D010100500_01_050");
MsgDisp("Kazama","This is something I used to eat for lunch
when I was abroad.");
StlEyeOpenLevel(1,5);
VoicePlay("D010100500_01_060");
MsgDisp("Kazama","Sausage, Bacon, Mushrooms, Eggs, Baked
Beans with Roasted Tomatoes.
And of course, fried fish.");
MsgDisp("主人公","Hehe, that sounds delicious!");
StlEye(1,1);
VoicePlay("D010100500_01_070");
MsgDisp("Kazama","I mostly ate Japanese food, but sometimes
I ate this kind of food too.
I don't hate it.");
StlEyeOpenLevel(1,5,1);
StlMouth(1,0);
VoicePlay("D010100500_01_080");
MsgDisp("Kazama","But if I had to choose......");
MsgDisp("主人公","Eh......?");
StlEye(1,0);
StlMouth(1,1);
VoicePlay("D010100500_01_090");
MsgDisp("Kazama","Well, I'll think about it some more after
we eat?");
SEStop("EV_SE_604",2.5);
MsgClose();
ScrFadeOut(0,0,120);
StlClose();
BGMVol(0.5,2);
BGOpen("sc010",1);
ChLayout(1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0);
Wait(50,0);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for the food.
And thanks for inviting me over.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("D010100500_01_100");
MsgDisp("Kazama","...... Thank you too.
Were you paying attention to that phone
call I had on the rooftop?");
MsgDisp("主人公","Ah......");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D010100500_01_110");
MsgDisp("Kazama","It's fine.
I've once again realized that I don't want
a British lunch, I'd prefer soba.");
MsgDisp("主人公","Soba?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("D010100500_01_120");
MsgDisp("Kazama","Yep.
That flavor is better for me, after all.");
MsgDisp("主人公","(｛風真＊＊｝......Like I thought, maybe
his parents are still asking him to come
back to England......?)");
BGMStop();
SEVol(0.7,0);
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
ChPrmTblAdd(1,0);
