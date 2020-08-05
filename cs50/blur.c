//to refactor

void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE cpImage[height][width];

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cpImage[i][j] = image[i][j];
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == 0 && j == 0)
            {
                image[i][j].rgbtRed = round((cpImage[i][j].rgbtRed + cpImage[i + 1][j].rgbtRed + cpImage[i][j + 1].rgbtRed + cpImage[i + 1][j + 1].rgbtRed) / 4.0);

                image[i][j].rgbtGreen = round((cpImage[i][j].rgbtGreen + cpImage[i + 1][j].rgbtGreen + cpImage[i][j + 1].rgbtGreen + cpImage[i + 1][j + 1].rgbtGreen) / 4.0);

                image[i][j].rgbtBlue = round((cpImage[i][j].rgbtBlue + cpImage[i + 1][j].rgbtBlue + cpImage[i][j + 1].rgbtBlue + cpImage[i + 1][j + 1].rgbtBlue) / 4.0);
            }
            else if (i == 0 && j == width - 1)
            {
                image[i][j].rgbtRed = round((cpImage[i][j].rgbtRed + cpImage[i + 1][j].rgbtRed + cpImage[i][j - 1].rgbtRed + cpImage[i + 1][j - 1].rgbtRed) / 4.0);

                image[i][j].rgbtGreen = round((cpImage[i][j].rgbtGreen + cpImage[i + 1][j].rgbtGreen + cpImage[i][j - 1].rgbtGreen + cpImage[i + 1][j - 1].rgbtGreen) / 4.0);

                image[i][j].rgbtBlue = round((cpImage[i][j].rgbtBlue + cpImage[i + 1][j].rgbtBlue + cpImage[i][j - 1].rgbtBlue + cpImage[i + 1][j - 1].rgbtBlue) / 4.0);
            }
            else if (i == 0)
            {
                image[i][j].rgbtRed = round((cpImage[i][j].rgbtRed + cpImage[i][j - 1].rgbtRed + cpImage[i][j + 1].rgbtRed + cpImage[i + 1][j].rgbtRed + cpImage[i + 1][j - 1].rgbtRed + cpImage[i + 1][j + 1].rgbtRed) / 6.0);

                image[i][j].rgbtGreen = round((cpImage[i][j].rgbtGreen + cpImage[i][j - 1].rgbtGreen + cpImage[i][j + 1].rgbtGreen + cpImage[i + 1][j].rgbtGreen + cpImage[i + 1][j - 1].rgbtGreen + cpImage[i + 1][j + 1].rgbtGreen) / 6.0);

                image[i][j].rgbtBlue = round((cpImage[i][j].rgbtBlue + cpImage[i][j - 1].rgbtBlue + cpImage[i][j + 1].rgbtBlue + cpImage[i + 1][j].rgbtBlue + cpImage[i + 1][j - 1].rgbtBlue + cpImage[i + 1][j + 1].rgbtBlue) / 6.0);
            }
            else if (i == height - 1 && j == 0)
            {
                image[i][j].rgbtRed = round((cpImage[i][j].rgbtRed + cpImage[i - 1][j].rgbtRed + cpImage[i][j + 1].rgbtRed + cpImage[i - 1][j + 1].rgbtRed) / 4.0);

                image[i][j].rgbtGreen = round((cpImage[i][j].rgbtGreen + cpImage[i - 1][j].rgbtGreen + cpImage[i][j + 1].rgbtGreen + cpImage[i - 1][j + 1].rgbtGreen) / 4.0);

                image[i][j].rgbtBlue = round((cpImage[i][j].rgbtBlue + cpImage[i - 1][j].rgbtBlue + cpImage[i][j + 1].rgbtBlue + cpImage[i - 1][j + 1].rgbtBlue) / 4.0);
            }
            else if (j == 0)
            {
                image[i][j].rgbtRed = round((cpImage[i][j].rgbtRed + cpImage[i - 1][j].rgbtRed + cpImage[i + 1][j].rgbtRed + cpImage[i][j + 1].rgbtRed + cpImage[i - 1][j + 1].rgbtRed + cpImage[i + 1][j + 1].rgbtRed) / 6.0);

                image[i][j].rgbtGreen = round((cpImage[i][j].rgbtGreen + cpImage[i - 1][j].rgbtGreen + cpImage[i + 1][j].rgbtGreen + cpImage[i][j + 1].rgbtGreen + cpImage[i - 1][j + 1].rgbtGreen + cpImage[i + 1][j + 1].rgbtGreen) / 6.0);

                image[i][j].rgbtBlue = round((cpImage[i][j].rgbtBlue + cpImage[i - 1][j].rgbtBlue + cpImage[i + 1][j].rgbtBlue + cpImage[i][j + 1].rgbtBlue + cpImage[i - 1][j + 1].rgbtBlue + cpImage[i + 1][j + 1].rgbtBlue) / 6.0);
            }
            else if (i == height - 1 && j == width - 1)
            {
                image[i][j].rgbtRed = round((cpImage[i][j].rgbtRed + cpImage[i - 1][j].rgbtRed + cpImage[i][j - 1].rgbtRed + cpImage[i - 1][j - 1].rgbtRed) / 4.0);

                image[i][j].rgbtGreen = round((cpImage[i][j].rgbtGreen + cpImage[i - 1][j].rgbtGreen + cpImage[i][j - 1].rgbtGreen + cpImage[i - 1][j - 1].rgbtGreen) / 4.0);

                image[i][j].rgbtBlue = round((cpImage[i][j].rgbtBlue + cpImage[i - 1][j].rgbtBlue + cpImage[i][j - 1].rgbtBlue + cpImage[i - 1][j - 1].rgbtBlue) / 4.0);
            }
            else if (i == height - 1)
            {
                image[i][j].rgbtRed = round((cpImage[i][j].rgbtRed + cpImage[i][j - 1].rgbtRed + cpImage[i][j + 1].rgbtRed + cpImage[i - 1][j].rgbtRed + cpImage[i - 1][j - 1].rgbtRed + cpImage[i - 1][j + 1].rgbtRed) / 6.0);

                image[i][j].rgbtGreen = round((cpImage[i][j].rgbtGreen + cpImage[i][j - 1].rgbtGreen + cpImage[i][j + 1].rgbtGreen + cpImage[i - 1][j].rgbtGreen + cpImage[i - 1][j - 1].rgbtGreen + cpImage[i - 1][j + 1].rgbtGreen) / 6.0);

                image[i][j].rgbtBlue = round((cpImage[i][j].rgbtBlue + cpImage[i][j - 1].rgbtBlue + cpImage[i][j + 1].rgbtBlue + cpImage[i - 1][j].rgbtBlue + cpImage[i - 1][j - 1].rgbtBlue + cpImage[i - 1][j + 1].rgbtBlue) / 6.0);
            }
            else if (j == width - 1)
            {
                image[i][j].rgbtRed = round((cpImage[i][j].rgbtRed + cpImage[i - 1][j].rgbtRed + cpImage[i + 1][j].rgbtRed + cpImage[i][j - 1].rgbtRed + cpImage[i - 1][j - 1].rgbtRed + cpImage[i + 1][j - 1].rgbtRed) / 6.0);

                image[i][j].rgbtGreen = round((cpImage[i][j].rgbtGreen + cpImage[i - 1][j].rgbtGreen + cpImage[i + 1][j].rgbtGreen + cpImage[i][j - 1].rgbtGreen + cpImage[i - 1][j - 1].rgbtGreen + cpImage[i + 1][j - 1].rgbtGreen) / 6.0);

                image[i][j].rgbtBlue = round((cpImage[i][j].rgbtBlue + cpImage[i - 1][j].rgbtBlue + cpImage[i + 1][j].rgbtBlue + cpImage[i][j - 1].rgbtBlue + cpImage[i - 1][j - 1].rgbtBlue + cpImage[i + 1][j - 1].rgbtBlue) / 6.0);
            }
            else
            {
                image[i][j].rgbtRed = round((cpImage[i][j].rgbtRed + cpImage[i][j - 1].rgbtRed + cpImage[i][j + 1].rgbtRed + cpImage[i - 1][j].rgbtRed + cpImage[i - 1][j - 1].rgbtRed + cpImage[i - 1][j + 1].rgbtRed + cpImage[i + 1][j].rgbtRed + cpImage[i + 1][j - 1].rgbtRed + cpImage[i + 1][j + 1].rgbtRed) / 9.0);

                image[i][j].rgbtGreen = round((cpImage[i][j].rgbtGreen + cpImage[i][j - 1].rgbtGreen + cpImage[i][j + 1].rgbtGreen + cpImage[i - 1][j].rgbtGreen + cpImage[i - 1][j - 1].rgbtGreen + cpImage[i - 1][j + 1].rgbtGreen + cpImage[i + 1][j].rgbtGreen + cpImage[i + 1][j - 1].rgbtGreen + cpImage[i + 1][j + 1].rgbtGreen) / 9.0);

                image[i][j].rgbtBlue = round((cpImage[i][j].rgbtBlue + cpImage[i][j - 1].rgbtBlue + cpImage[i][j + 1].rgbtBlue + cpImage[i - 1][j].rgbtBlue + cpImage[i - 1][j - 1].rgbtBlue + cpImage[i - 1][j + 1].rgbtBlue + cpImage[i + 1][j].rgbtBlue + cpImage[i + 1][j - 1].rgbtBlue + cpImage[i + 1][j + 1].rgbtBlue) / 9.0);
            }
        }
    }

    return;
}
