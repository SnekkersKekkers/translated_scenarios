BGOpen("sc824",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","(Ok, I was able to buy a lot of 
souvenirs! I wonder when ｛柊＊＊＊｝ 
is done......)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(5,254,4,2,4,9,-1,0,0);
VoiceEVSPlay(5);
VoicePlay("Q110500000_05_000");
MsgDisp("Hiiragi","｛主人公｝.
Excuse me dearly for letting you wait.");
MsgDisp("主人公","Don't worry.
I just finished shopping too.");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("Q110500000_05_010");
MsgDisp("Hiiragi","Is that so, I'm glad.
Were you able to buy some good 
souvenirs?");
MsgDisp("主人公","Yeah, I bought a lot.
I even got to taste some castellas.");
ChEye(5,3);
ChMotion(5,3);
VoicePlay("Q110500000_05_020");
MsgDisp("Hiiragi","That's good to hear.
I bought some castella too.");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("Q110500000_05_030");
MsgDisp("Hiiragi","And also...... a matching with you.
A chopstick rest in the shape of the
Megane Bridge.");
MsgDisp("主人公","Wow, so cute!");
ChEye(5,4);
VoicePlay("Q110500000_05_040");
MsgDisp("Hiiragi","It's from Nagasaki glass.
Could you use it?");
MsgDisp("主人公","Yeah, of course.
Thanks, ｛柊＊＊＊｝ !
Where did you find such a pretty one?");
ChEye(5,0);
ChMotion(5,4);
VoicePlay("Q110500000_05_050");
MsgDisp("Hiiragi","I found it near the Megane Bridge and 
was curious about it. 
I rushed to it.");
MsgDisp("主人公","Eeh∋
You went all the way back and bought it 
for me?");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("Q110500000_05_060");
MsgDisp("Hiiragi","Yeah, it's too late if I go back to 
Habataki City and regret it. With this, 
I can remember about today when I eat.");
MsgDisp("主人公","｛柊＊＊＊｝......
Thank you, I'll treasure it.");
ChMotion(5,0,1);
VoicePlay("Q110500000_05_070");
MsgDisp("Hiiragi","You're welcome.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
Wait(40,0);
