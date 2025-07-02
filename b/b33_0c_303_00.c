BGOpen("fp600",0);
ChLayout(2);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B330C30300_06_000");
MsgDisp("Himuro","To think that Kojiro-sensei
had an interest in skating.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B330C30300_07_000");
MsgDisp("Mikage","It's just nostalgic.
When I was a kid, I used to play on the 
natural rinks of lakes and ponds.");
MsgDisp("主人公","Heeh, amazing!");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
VoicePlay("B330C30300_05_000");
MsgDisp("Hiiragi","I can barely stand, 
so I would be honored 
if you were to teach me.");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,1);
VoicePlay("B330C30300_06_010");
MsgDisp("Himuro","So that means you've lured us to
a place where you've got
the upper hand?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("B330C30300_07_010");
MsgDisp("Mikage","That's it.
Shall we go?");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
ChClose(6,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_509");
Wait(40,0);
ChOpen(5,255,0,0,4,-1,-1,0,0);
MsgDisp("主人公","｛柊＊＊＊｝, you've gotten better. ");
ChEye(5,4);
VoicePlay("B330C30300_05_010");
MsgDisp("Hiiragi","You as well.
It is thanks to Mikage-sensei's lesson.");
ChClose(5,0,30);
ChLayout(2);
MsgClose();
ChOpen(5,255,0,0,4,-1,-1,0,1,0,30);
MsgClose();
SEPlay("EV_SE_509",0,0.7);
Wait(40,0);
ChOpen(7,255,3,0,3,-1,-1,0,0,0,30);
SEPlay("EV_SE_559");
Wait(30,0);
ChOpen(6,255,1,0,0,-1,-1,0,2,0,30);
SEWait();
VoicePlay("B330C30300_07_020");
MsgDisp("Mikage","That's good, Inori.
You can conquer both the waves
and the icetop.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B330C30300_06_020");
MsgDisp("Himuro","It's as Kojiro-sensei says.
Don't lean forward, and keep your 
gravity center. It's the same as surfing.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("B330C30300_07_030");
MsgDisp("Mikage","Yanosuke, your stance is pretty cool-
looking too. Like a figure skater.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B330C30300_05_020");
MsgDisp("Hiiragi","Thank you very much.
But I totter when I begin to move.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("B330C30300_07_040");
MsgDisp("Mikage","That's not true.
Let's glide again.");
MsgClose();
SEPlay("EV_SE_509",0,0.6);
ChClose(7,0,30);
SEPlay("EV_SE_559",0.1,0.6);
ChClose(5,0,30);
SEPlay("EV_SE_510",0,0.7,0.3);
ChClose(6,0,30);
ChLayout(1);
MsgClose();
ChOpen(6,255,0,0,0,-1,-1,0,0,0,30);
VoicePlay("B330C30300_06_030");
MsgDisp("Himuro","Could it be...
Kojiro-sensei is actually
good at teaching?");
MsgDisp("主人公","Yeah.
Yes, he explains things gently,
whether it's academics or anything else. ");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
VoicePlay("B330C30300_06_040");
MsgDisp("Himuro","I see...");
ChEye(6,0);
ChMouth(6,2);
ChMotion(6,2);
VoicePlay("B330C30300_06_050");
MsgDisp("Himuro","So that's why sometimes Reichi-san
will say he's the ideal teacher...");
MsgDisp("主人公","Hm?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330C30300_06_060");
MsgDisp("Himuro","No, it's nothing..");
MsgDisp("主人公","(Just now, was
｛氷室＊＊｝ talking about
Himuro-sensei....)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
ChLayout(2);
ChOpen(7,253,7,0,0,-1,-1,0,3,0,0);
ChOpen(5,253,7,0,0,-1,-1,0,3,0,0);
ChOpen(6,253,7,0,0,-1,-1,0,3,0,0);
